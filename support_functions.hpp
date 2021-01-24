#ifndef SUPPORT
#define SUPPORT

#include "global_defs.hpp"
#include "TaskA.hpp"
#include "TaskB.hpp"

TaskA* createTask(states current_state = STATE_A);
TaskB* createTaskB(states current_state = STATE_B);

#endif
