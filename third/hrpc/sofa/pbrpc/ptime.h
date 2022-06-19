// Copyright (c) 2014 Baidu.com, Inc. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef _SOFA_PBRPC_PTIME_H_
#define _SOFA_PBRPC_PTIME_H_

#include <cstdio> // for snprintf()

#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/date_time/local_time_adjustor.hpp>
#include <boost/date_time/c_local_time_adjustor.hpp>

namespace sofa {
namespace pbrpc {

typedef boost::posix_time::ptime PTime;
typedef boost::posix_time::time_duration TimeDuration;

inline TimeDuration time_duration_microseconds(int64_t);
inline PTime ptime_now()
{
    return boost::posix_time::microsec_clock::local_time();
}

inline PTime ptime_infin()
{
    return boost::posix_time::ptime(boost::posix_time::pos_infin);
}

inline std::string ptime_to_string(const PTime& t)
{
    return boost::posix_time::to_iso_extended_string(t);
}

inline TimeDuration time_duration_hours(int64_t n)
{
    return boost::posix_time::hours(static_cast<long>(n));
}

inline TimeDuration time_duration_minutes(int64_t n)
{
    return boost::posix_time::minutes(static_cast<long>(n));
}

inline TimeDuration time_duration_seconds(int64_t n)
{
    return boost::posix_time::seconds(static_cast<long>(n));
}

inline TimeDuration time_duration_milliseconds(int64_t n)
{
    return boost::posix_time::milliseconds(static_cast<long>(n));
}

inline TimeDuration time_duration_microseconds(int64_t n)
{
    return boost::posix_time::microseconds(static_cast<long>(n));
}

} // namespace pbrpc
} // namespace sofa

#endif // _SOFA_PBRPC_PTIME_H_

/* vim: set ts=4 sw=4 sts=4 tw=100 */
