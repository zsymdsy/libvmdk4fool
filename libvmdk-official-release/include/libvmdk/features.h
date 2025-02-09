/*
 * Features of libvmdk
 *
 * Copyright (C) 2009-2022, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#if !defined( _LIBVMDK_FEATURES_H )
#define _LIBVMDK_FEATURES_H

/* The libvmdk type support features
 */
#if defined( WINAPI ) || 0
#define LIBVMDK_HAVE_WIDE_CHARACTER_TYPE	1
#endif

#if defined( WINAPI ) || 0
#define LIBVMDK_HAVE_MULTI_THREAD_SUPPORT	1
#endif

#if defined( HAVE_LIBBFIO ) || ( !defined( WINAPI ) && 0 )
#define LIBVMDK_HAVE_BFIO			1
#endif

#if !defined( LIBVMDK_DEPRECATED )
#if defined( __GNUC__ ) && __GNUC__ >= 3
#define LIBVMDK_DEPRECATED	__attribute__ ((__deprecated__))
#elif defined( _MSC_VER )
#define LIBVMDK_DEPRECATED	__declspec(deprecated)
#else
#define LIBVMDK_DEPRECATED
#endif
#endif

#endif /* !defined( _LIBVMDK_FEATURES_H ) */

