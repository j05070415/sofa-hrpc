// Copyright (c) 2014 Baidu.com, Inc. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef _SOFA_PBRPC_ATOMIC_H_
#define _SOFA_PBRPC_ATOMIC_H_

//#if !defined(__i386__) && !defined(__x86_64__)
//#error    "Arch not supprot!"
//#endif

//#include <stdint.h>
//#include <mutex>
#include <atomic>

namespace sofa {
namespace pbrpc {
template <typename T, typename C, typename D>
inline T atomic_cmpxchg(std::atomic<T> &n, C cmp, D dest)
{
    if (n == cmp) {
        n = dest;
        return cmp;
    }

    return n;
}

template <typename T, typename E, typename C>
inline T atomic_comp_swap(std::atomic<T>& lockword, E exchange, C comperand)
{
    return atomic_cmpxchg(lockword, comperand, exchange);
}
} // namespace pbrpc
} // namespace sofa

#endif // _SOFA_PBRPC_ATOMIC_H_

/* vim: set ts=4 sw=4 sts=4 tw=100 */
