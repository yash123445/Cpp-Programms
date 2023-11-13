#include<iostream>
#include<string.h>
using namespace std;

class Emp
{
	int eId,eSalary;
	char ename[20];
	public:
		Emp();
		Emp(int , char *, int);
		void display();
		int geteId();
};
