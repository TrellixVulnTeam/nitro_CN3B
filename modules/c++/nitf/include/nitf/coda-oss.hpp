/* =========================================================================
 * This file is part of NITRO
 * =========================================================================
 *
 * (C) Copyright 2004 - 2014, MDA Information Systems LLC
 *
 * NITRO is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program; if not, If not,
 * see <http://www.gnu.org/licenses/>.
 *
 */

#pragma once

#include <std/bit> // std::endian
#include <std/cstddef> // std::byte
#include <std/filesystem>
#include <std/span>

//#define CODA_OSS_Throwable_isa_std_exception 1 // except::Throwable derives from std::exception
#include <sys/Conf.h>
#include <except/Throwable.h>

//--------------------------------------------------------------

#if _MSC_VER
#pragma warning(push)
#pragma warning(disable: 5039) // '...': pointer or reference to potentially throwing function passed to '...' function under -EHc. Undefined behavior may occur if this function throws an exception.
#endif // _MSC_VER
#include <mt/Singleton.h>
#if _MSC_VER
#pragma warning(pop)
#endif // _MSC_VER
#include <import/except.h>
#include <import/mt.h>
#include <import/sys.h>
#include <import/str.h>
#include <import/types.h>
#include <import/io.h>
#include <import/mem.h>
#include <gsl/gsl.h>

#if !CODA_OSS_cpp17
#error Must compile with C++17.
#endif
