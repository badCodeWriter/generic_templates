#ifndef TASK_A
#define TASK_A

#include "Task.hpp"
#include "global_defs.hpp"

class TaskA : public Task
{
public:
  TaskA(states current_state = STATE_A);
};

#endif
