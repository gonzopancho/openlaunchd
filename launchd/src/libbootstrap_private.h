#ifndef _BOOTSTRAP_PRIVATE_H_
#define _BOOTSTRAP_PRIVATE_H_
/*
 * Copyright (c) 2007 Apple Inc. All rights reserved.
 *
 * @APPLE_APACHE_LICENSE_HEADER_START@
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * 
 * @APPLE_APACHE_LICENSE_HEADER_END@
 */

#include <servers/bootstrap.h>
#include <sys/types.h>

__BEGIN_DECLS

#pragma GCC visibility push(default)

#define BOOTSTRAP_PER_PID_SERVICE	1

kern_return_t bootstrap_register2(mach_port_t bp, name_t service_name, mach_port_t sp, uint64_t flags);

kern_return_t bootstrap_look_up2(mach_port_t bp, name_t service_name, mach_port_t *sp, pid_t target_pid, uint64_t flags);

#pragma GCC visibility pop

__END_DECLS

#endif
