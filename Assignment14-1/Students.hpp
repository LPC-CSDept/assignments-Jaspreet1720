#ifndef 	STUDENT_H
#define 	STUDENT_H
#include <string>
#include <iostream>
using namespace std;

class Student
{
	private:
		static double TOTAL_SUM;
		static int NUM_STUDENTS;
        int id;
        string name;
        double scores[3];
        
	public:
		Student() : id(0), name()
		{
			NUM_STUDENTS += 1;
		}
		// Student(string n, int sid, double *scr)
		Student(string n, int sid, double scr[])
		{
			name = n;
			id = sid;
			for(int i=0;i<3; i++)
			{
				// scores[i] = *(scr+i);
				scores[i] = scr[i];
				cout << " scr " << scr[i] << endl;
                TOTAL_SUM += scr[i];
				cout << " total " << TOTAL_SUM << endl;
			}
            NUM_STUDENTS +=1;
		}
		int getID() { return id; }
		string getName() { return name; }
		void setID(int i) { id = i; }
		void setName(string s) { name = s; }
		static int getNumStudents()
		{
			return NUM_STUDENTS; 
		}
		static double getTotalSum()
		{
			return TOTAL_SUM;
		}

};

int Student::NUM_STUDENTS = 0;
double Student::TOTAL_SUM = 0;



#endif