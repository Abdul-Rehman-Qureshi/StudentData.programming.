// 03 Represent a Student in programming using classes and objects
// in c++ 

#include <iostream>
#include <string>

using namespace std;

class student 
{
	private:
	 string fname;
	 string lname;
	 int age;
	 string pnumber;
	 string gender;
	 
	 public:
	 	void setstudent(string fname1, string lname1, int age1, string p_number,string gender1) {
	 		fname=fname1;
	 		lname=lname1;
	 		age=age1;
	 		pnumber=p_number;
	 		gender=gender1;
		 }
		 void getstudent(){
		 	cout << "Enter Your First Name: " << endl;
		 	cin >> fname;
		 	cout << "Enter Your Last Name: " << endl;
		 	cin >> lname;
		 	cout << "Enter Your Age: " << endl;
		 	cin >> age;
		 	cout << "Enter You Personal Contact Number: " << endl;
		 	cin >> pnumber;
		 	cout << "Enter Your Gender: " << endl;
		 	cin >> gender;
		 }
	 void showstudent(){
	 	cout<<"Entered Student Data is. " << endl;
		 cout <<"Full name: " << fname << " " << lname  << "."<< endl;
		 cout <<"Age:" << age  <<endl;
		 cout <<  "Conact number: " << pnumber <<endl;
		 cout << "Gender: " << gender <<endl ;
	 	
	 }
};

int main (){

student s1;
s1.getstudent();
s1.showstudent();
}

