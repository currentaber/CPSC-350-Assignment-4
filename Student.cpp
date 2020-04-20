#include "Student.h"

Student::Student()
{
  minutes_needed_at_window = 0;
  minute_arrived = 0;
  number_of_minutes_waited = 0;
  number_of_minutes_at_window = 0;
}

Student::Student(int duration, int arrival)
{
  minutes_needed_at_window = duration;
  minute_arrived = arrival;
  number_of_minutes_waited = 0;
  number_of_minutes_at_window = 0;
}

Student::~Student()
{

}

void Student::update_tick()
{
  number_of_minutes_waited += 1;
}

void Student::increment_number_of_minutes_at_window()
{
  number_of_minutes_at_window += 1;
  cout << "Incremented to: "<< number_of_minutes_at_window << endl;
}

int Student::get_number_of_minutes_at_window()
{
  return number_of_minutes_at_window;
}

void Student::printInfo()
{
  cout << "Minutes needed: " << minutes_needed_at_window << endl;
  cout << "Minute arrived: " << minute_arrived << endl;
  cout << "Minutes waited: " << number_of_minutes_waited << endl;
}

int Student::get_arrival_time()
{
  return minute_arrived;
}

bool Student::isDone()
{
  if (number_of_minutes_at_window == minutes_needed_at_window)
  {
    return true;
  }
  else
  {
    return false;
  }
}
