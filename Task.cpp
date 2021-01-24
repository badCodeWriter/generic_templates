#include <iostream>
#include "global_defs.hpp"
#include "Task.hpp"

Task::Task(states current_state)
{
  current_state_ = current_state;
}

void Task::ExecuteTask()
{
  std::cout << std::endl << "task executed " << current_state_ << std::endl;
}

void Task::set_current_state(states current_state)
{
  current_state_ = current_state;
}
states Task::get_current_state()
{
  return current_state_;
}
