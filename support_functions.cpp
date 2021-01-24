#include "support_functions.hpp"

TaskA* createTask(states current_state)
{
  TaskA *t = new TaskA(current_state);
  return t;
}
