// Copyright (c) 2014 Baidu.com, Inc. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef _SOFA_PBRPC_WAIT_EVENT_H_
#define _SOFA_PBRPC_WAIT_EVENT_H_

//#include <pthread.h>
#include <condition_variable>
#include <mutex>

namespace sofa {
namespace pbrpc {

class WaitEvent
{
public:
    WaitEvent() : _signaled(false)
    {
    }
    ~WaitEvent() 
    {
    }

    void Wait()
    {
        std::unique_lock<std::mutex> l(_lock);
        while (!_signaled)
        {
            _cond.wait(l);
        }
        _signaled = false;
    }

    void Signal()
    {
        std::unique_lock<std::mutex> l(_lock);
        _signaled = true;
        _cond.notify_all();
    }

private:
    std::mutex _lock;
    std::condition_variable _cond;
    bool _signaled;
};

} // namespace pbrpc
} // namespace sofa

#endif // _SOFA_PBRPC_WAIT_EVENT_H_

/* vim: set ts=4 sw=4 sts=4 tw=100 */
