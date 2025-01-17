/*
 * Copyright (c) 2018, Red Hat Inc. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Please contact Oracle, 500 Oracle Parkway, Redwood Shores, CA 94065 USA
 * or visit www.oracle.com if you need additional information or have any
 * questions.
 *
 */

#ifndef SHARE_GC_SHARED_THIRD_PARTY_HEAP_VM_STRUCTS_HPP
#define SHARE_GC_SHARED_THIRD_PARTY_HEAP_VM_STRUCTS_HPP

// #include "gc/epsilon/epsilonHeap.hpp"

#include THIRD_PARTY_HEAP_FILE(thirdPartyHeap.hpp)

#include "gc/shared/space.hpp"
#include "memory/virtualspace.hpp"

#define VM_STRUCTS_THIRD_PARTY_HEAP(nonstatic_field, volatile_nonstatic_field, \
                                    static_field)

#define VM_TYPES_THIRD_PARTY_HEAP(declare_type, declare_toplevel_type, \
                                  declare_integer_type)                \
  declare_type(ThirdPartyHeap, CollectedHeap)

#define VM_INT_CONSTANTS_THIRD_PARTY_HEAP(declare_constant, \
                                          declare_constant_with_value)

#endif  // SHARE_GC_SHARED_THIRD_PARTY_HEAP_VM_STRUCTS_HPP