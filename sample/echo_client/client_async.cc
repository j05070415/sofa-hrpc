// Copyright (c) 2014 Baidu.com, Inc. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <sofa/pbrpc/pbrpc.h>
#include "echo_service.pb.h"

#include <QString>

void EchoCallback(sofa::pbrpc::RpcController* cntl,
        sofa::pbrpc::test::EchoRequest* request,
        sofa::pbrpc::test::EchoResponse* response,
        bool* callbacked)
{
    SLOG(NOTICE, "RemoteAddress=%s", cntl->RemoteAddress().c_str());
    SLOG(NOTICE, "IsRequestSent=%s", cntl->IsRequestSent() ? "true" : "false");
    if (cntl->IsRequestSent())
    {
        SLOG(NOTICE, "LocalAddress=%s", cntl->LocalAddress().c_str());
        SLOG(NOTICE, "SentBytes=%ld", cntl->SentBytes());
    }

    if (cntl->Failed()) {
        SLOG(ERROR, "request failed: %s", cntl->ErrorText().c_str());
    }
    else {
        SLOG(NOTICE, "request succeed: %s", response->message().c_str());
    }

    delete cntl;
    delete request;
    delete response;
    *callbacked = true;
}

int main()
{
    SOFA_PBRPC_SET_LOG_LEVEL(NOTICE);

    // Define an rpc server.
    sofa::pbrpc::RpcClientOptions client_options;
    sofa::pbrpc::RpcClient rpc_client(client_options);

    // Define an rpc channel.
    sofa::pbrpc::RpcChannelOptions channel_options;
    sofa::pbrpc::RpcChannel rpc_channel(&rpc_client, "127.0.0.1:12321", channel_options);

    for (int i=0; i<99999999; ++i) {
        // Prepare parameters.
        sofa::pbrpc::RpcController* cntl = new sofa::pbrpc::RpcController();
        cntl->SetTimeout(12000);
        sofa::pbrpc::test::EchoRequest* request = new sofa::pbrpc::test::EchoRequest();
        QString msg = QString("Hello from qinzuoyan: %1").arg(i);
        request->set_message(msg.toStdString());
        sofa::pbrpc::test::EchoResponse* response = new sofa::pbrpc::test::EchoResponse();
        bool callbacked = false;
        google::protobuf::Closure* done = sofa::pbrpc::NewClosure(
                &EchoCallback, cntl, request, response, &callbacked);

        // Async call.
        sofa::pbrpc::test::EchoServer_Stub stub(&rpc_channel);
        stub.Echo(cntl, request, response, done);
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }

    // Wait call done.
    getchar();

    return EXIT_SUCCESS;
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */
