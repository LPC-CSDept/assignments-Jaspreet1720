#include <iostream>
#include <fstream>

using namespace std;

class Employee{
    private:
        //Data members
        //Stores emlployee name, emoloyee number and hire date
        string emp_name, emp_number;
        string hire_date;
    
    public:
        //Function members
        Employee(){     //Default constructor
            emp_name = "";
            emp_number = "";
            hire_date = "";
        }

        //Parameterized constructor
        //Takes employee name, number and hire date as parameters and initialize the object
        Employee(string name, string e_number, string date){
            emp_name = name;
            emp_number = e_number;
            hire_date = date;
        }

        //Getter functions, these functions are used by ProductionWorker class
        //that inherits the employee class but cannot directly access its data members
        //Returns employee name
        string get_emp_name(){
            return emp_name;
        }

        //Returns employee number
        string get_emp_number(){
            return emp_number;
        }
        
        //Returns hire date
        string get_hire_date(){
            return hire_date;
        }
};

//publicpy inherits the employee class
class ProductionWorker: public Employee{
    private:    //Data members for production workers
        int shift;
        double pay;
    public:
        ProductionWorker():Employee(){  //Default constructor that inherits the default constructor of the employee class
            shift = 0;
            pay = 0;
        }    

        //Parameterized constructor that inherit the parameterized constructor of the employee class
        //Passes name, id and date to the employee class's constructor
        ProductionWorker(string name, string id, string date, int shift_no, double pay_rate):Employee(name, id, date){
            shift = shift_no;
            pay = pay_rate;
        }

        //Prints details of the worker, makes use of the inherited function members of employee class
        void print_details(){
            cout << get_emp_name() << "\t" << get_emp_number() << "\t\t";
            cout << get_hire_date() << "\t" << shift << "\t" << pay << endl;
        }

        //Return monthly pay rate, used in overloaded operator
        double get_pay(){
            return pay;
        }

        //Overloaded > operator
        //It takes an object of ProductionWorker class and compares their pay and return a boolean value
        bool operator > (ProductionWorker worker){
            if(pay > worker.get_pay())
                return true;
            return false;
        }
};

int main(){
    //Creates an array of 10 production worker objects
    ProductionWorker ProductWorkers[10];

    //Creates an ifstream object for reading data
    ifstream file_input;
    file_input.open("data.txt");

    //Temporary variables to read data
    string name, id, date;
    int shift;
    double pay;
    //Read data of 10 ProductWorkers
    for(int i = 0; i < 10; i++){
        file_input >> name >> id >> date >> shift >> pay;
        //Make use of a temporary worker object
        ProductionWorker worker(name, id, date, shift, pay);
        //Copy constructor worker into the ProductWorkers array
        ProductWorkers[i] = worker;
    }

    //Print data of the ProductWorkers
    cout << "Employee Name\tEmployee Number\tJoining\t\tShift\tPay Rate\n";
    for(int i = 0; i < 10; i++){
        ProductWorkers[i].print_details();
    }

    //Uses overloaded operator to find the worker with maximum pay
    ProductionWorker greatestPay = ProductWorkers[0];
    for(int i = 1; i < 10; i++){
        if(ProductWorkers[i] > greatestPay)
            greatestPay = ProductWorkers[i];
    }

    //Prints the worker with maximum pay
    cout << "Employee with highest pay rate: \n";
    greatestPay.print_details();
    return 0;
}