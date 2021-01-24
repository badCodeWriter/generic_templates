#ifndef TASK_B
#define TASK_B

#include "Task.hpp"
#include "global_defs.hpp"

class TaskB : public Task
{
public:
  TaskB(states current_state = STATE_A);
};

#endif
