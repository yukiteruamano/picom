// SPDX-License-Identifier: MPL-2.0
// Copyright (c) Yuxuan Shui <yshuiv7@gmail.com>

#pragma once
#include <stdbool.h>
#include <sys/types.h>

#ifdef CONFIG_DBUS

#include <dbus/dbus.h>

bool rtkit_make_realtime(DBusConnection *system_bus, pid_t thread, int priority);

#else

static inline bool rtkit_make_realtime(DBusConnection *system_bus attr_unused,
                                       pid_t thread attr_unused, int priority attr_unused) {
	return false;
}

#endif
