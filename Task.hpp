#ifndef TASK
#define TASK

#include "global_defs.hpp"

class Task
{
public:
  Task(states current_state = STATE_A);
  void ExecuteTask();
  void set_current_state(states current_state);
  states get_current_state();
private:
  states current_state_;
};

#endif
