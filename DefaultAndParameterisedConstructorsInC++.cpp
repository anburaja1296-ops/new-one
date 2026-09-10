#include <iostream>
#include <string>
using namespace std;
class Employee{
private:
	int Id;
	string name;
	int age;
	double salary;
public:
	Employee(){
		Id = 0;
		name = "Unknown";
		age = 18;
		salary = 0;
		cout<<"Default constructor Called for employee with id : "<<Id<<endl;

	}
											
	Employee(int empId , string empName , int empAge , double empSalary){
		Id = empId;
		name = empName;
		age = empAge;
		salary = empSalary;
		cout<<"Parameterised Constructor called with id:"<<dI<<endl;

	}

										
	void Displaydetails(){
		cout<<"Employee Name : "<<name<<endl;
		cout<<"Employee Id : "<<Id<<endl;
		cout<<"Employee age : "<<age<<endl;
		cout<<"Employee Salary : "<<salary<<endl;
	}
	void updateSalary(double newSalary){
		salary = newSalary;
		cout<<"Salary Updated for Employee with Id: "<<Id<<"to"<<salary<<endl;

	}
};

int main(){
	Employee emp1;
	emp1.Displaydetails();
	emp1.updateSalary(300000);
	emp1.Displaydetails();
	cout<<endl;
	Employee emp2(99,"Ashwin",38,40000000);
	emp2.Displaydetails(); 
	emp2.updateSalary(5000000000);
	emp2.Displaydetails();


	return 0;

	

}

