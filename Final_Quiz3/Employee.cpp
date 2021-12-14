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

class ProductionWorker: public Employee{
  private: 
  int shift;
  double pay;
  
  public:

  ProductionWorker():Employee(){
    shift = 0;
    pay = 0;
  }

  ProductionWorker(string name, string id, string date, int_shift_no, double pay_rate):Employee(name,id, date){
    shift = shift_no;
    pay = pay_rate;
  }

  void print_details()
  {
    cout << get_emp_name() << "\t" << get_emp_number() << "\t\t";
    cout << get_hire_date() << "\t" << shift << "\t" << pay << endl;
  }

  double get_pay()
  {
    return pay;
  }
  bool operator > (ProductionWorker worker)
  {
    if(pay > worker.get_pay())
    return true;
    return false;
  }
};

int main()
{
  ProductionWorker ProductionWorkers[10];

  ifstream file_input;
  file_input.open("data.txt");

  string name, id, date;
  int shift;
  double pay;

  for(int i = 0; i < 10; i++)
  {
    file_input >> name >> id >> date >> shift >> pay;

    ProductionWorker worker(name, id, date, shift, pay);
    ProductionWorkers[i] = worker;
  }
}