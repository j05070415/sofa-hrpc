// Copyright (c) 2014 Baidu.com, Inc. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is modified from boost.
// Boost Software License - Version 1.0 - August 17th, 2003
//
//  error_code support implementation file  ----------------------------------//

//  Copyright Beman Dawes 2002, 2006

//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See library home page at http://www.boost.org/libs/system

//----------------------------------------------------------------------------//

//#include <boost/config/warning_disable.hpp>

// define BOOST_SYSTEM_SOURCE so that <boost/system/config.hpp> knows
// the library is being built (possibly exporting rather than importing code)
#define BOOST_SYSTEM_SOURCE 

#include <boost/system/config.hpp>
#include <boost/system/error_code.hpp>
#include <boost/cerrno.hpp>
#include <vector>
#include <cstdlib>
#include <cassert>

using namespace boost::system;
using namespace boost::system::errc;

#include <cstring> // for strerror/strerror_r

# if defined( BOOST_WINDOWS_API )
#   include <windows.h>
//#   include "local_free_on_destruction.hpp"
#   ifndef ERROR_INCORRECT_SIZE
#     define ERROR_INCORRECT_SIZE ERROR_BAD_ARGUMENTS
#   endif
# endif

#ifndef BOOST_SYSTEM_NOEXCEPT
#define BOOST_SYSTEM_NOEXCEPT
#endif

namespace boost
{
  namespace system
  {

  } // namespace system
} // namespace boost
