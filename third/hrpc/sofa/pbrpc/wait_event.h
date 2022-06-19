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
    WaitEvent(int timeout) : _timeout(timeout)
    {
    }
    ~WaitEvent() 
    {
		_stop = true;
		_cond.notify_all();
    }

    void Reset()
    {
        _stop = false;
		_cond.notify_all();
    }

    bool Wait()
    {
        std::unique_lock<std::mutex> l(_lock);
        return _cond.wait_for(l, std::chrono::milliseconds(_timeout), [this]{return _stop;});
    }

    void Signal()
    {
        std::unique_lock<std::mutex> l(_lock);
        _stop = true;
        _cond.notify_all();
    }

private:
    std::mutex _lock;
    std::condition_variable _cond;
    bool _stop = false;
    //ms
    int _timeout = 3000;
};

} // namespace pbrpc
} // namespace sofa

#endif // _SOFA_PBRPC_WAIT_EVENT_H_

/* vim: set ts=4 sw=4 sts=4 tw=100 */
