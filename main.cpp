#include <iostream>
#include <vector>
#include "global_defs.hpp"
#include "Task.hpp"
#include "TaskA.hpp"
#include "support_functions.hpp"

int main()
{
  states set_state = STATE_B;
  std::vector<TaskA *> v_tasksA;
  TaskA *t;

  t = createTask();
  v_tasksA.push_back(t); //taskA STATE_A

  t = createTask(set_state);
  v_tasksA.push_back(t); //taskA STATE_B

  t = createTask(STATE_C);
  v_tasksA.push_back(t); //taskA STATE_C

  v_tasksA[0]->ExecuteTask();
  v_tasksA[1]->ExecuteTask();
  v_tasksA[2]->ExecuteTask();

  return 0;
}
