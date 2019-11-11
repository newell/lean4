/*
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Sebastian Ullrich
*/
#pragma once
#include "kernel/environment.h"
#include "runtime/object.h"

namespace lean {
namespace ir {
/** \brief Run `n` using the "boxed" ABI, i.e. with all-owned parameters. */
object * run_boxed(environment const & env, name const & fn, object ** args);
uint32 run_main(environment const & env, int argv, char * argc[]);
}
void initialize_ir_interpreter();
void finalize_ir_interpreter();
}
