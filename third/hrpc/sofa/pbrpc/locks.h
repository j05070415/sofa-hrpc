// Copyright (c) 2014 Baidu.com, Inc. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef _SOFA_PBRPC_LOCKS_H_
#define _SOFA_PBRPC_LOCKS_H_

#include <mutex>
#include <shared_mutex>

typedef std::mutex MutexLock;
typedef std::mutex FastLock;
#ifdef __linux
typedef std::shared_timed_mutex RWLock;
#else
typedef std::shared_mutex RWLock;
#endif
typedef std::shared_lock<RWLock> ReadLocker;
typedef std::shared_lock<RWLock> WriteLocker;

#endif // _SOFA_PBRPC_LOCKS_H_

/* vim: set ts=4 sw=4 sts=4 tw=100 */
