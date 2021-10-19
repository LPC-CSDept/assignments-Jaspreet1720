#include<iostream>
#include<fstream>
using namespace std;


int main()
{
  const int LEN_NAME = 20;
  const int NUM_SCORES = 3;
  struct Student{
  int sid;
  char sname[LEN_NAME];
  double score[NUM_SCORES];
};
// creating memory space for std using new operator
struct Student *std = new struct Student;
ifstream in("students.txt"); // will open the students.txt file for reading
if(!in){

  cout<< "Error in file opening";
  exit(0);

}
// will open the students.bin file for writing
ofstream out("students.bin", ios::binary);

while(!in.eof()){

  in>>std->sid; // it will read the data from students.txt file
  in>>std->sname;
  for(int i = 0; i<NUM_SCORES; i++){
    in>>std->score[i];
  }
  out.write((char*)&(*std), sizeof(*std) ); // it will write data to students.bin file
}

in.close(); // closing the files
out.close();
return 0;
};