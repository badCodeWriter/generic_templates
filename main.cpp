#include <iostream>
#include <vector>
#include "global_defs.hpp"
#include "Task.hpp"
#include "TaskA.hpp"
#include "TaskB.hpp"
#include "support_functions.hpp"

int main()
{
  states set_state = STATE_B;
  std::vector<TaskA *> v_tasksA;
  std::vector<TaskB *> v_tasksB;
  TaskA *t;
  TaskB *t_b;

  t = createTask();
  v_tasksA.push_back(t); //taskA STATE_A

  t = createTask(set_state);
  v_tasksA.push_back(t); //taskA STATE_B

  t = createTask(STATE_C);
  v_tasksA.push_back(t); //taskA STATE_C

  v_tasksA[0]->ExecuteTask();
  v_tasksA[1]->ExecuteTask();
  v_tasksA[2]->ExecuteTask();

  t_b = createTaskB();
  v_tasksB.push_back(t_b); //taskB STATE_A

  v_tasksB[0]->ExecuteTask();

  return 0;
}
