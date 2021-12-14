#include <iostream>
#include <fstream>

using namespace std;

class Employee
{
  private:

  string emp_name, emp_number;
  string hire_date;

  public:
      Employee()
      {
        emp_name = " ";
        emp_number= " ";
        hire_date = " ";
      }

      Employee(string name, string e_number, string date)
      {
        emp_name = " ";
        emp_number = " ";
        hire_date = " ";
      }

      string get_emp_name(){
        return emp_name;
      }

      string get_emp_number(){
        return emp_number;
      }

      string get_hire_date(){
        return hire_date;
      }
};