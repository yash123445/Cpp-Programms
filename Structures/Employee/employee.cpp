#include"employee.h"
using namespace std;

Emp::Emp()
{
	eId=0;
	strcpy(ename,"");
	eSalary=0;
}
Emp::Emp(int id, char *nm, int s)
{
	eId= id;
	strcpy(ename,nm);
	eSalary=s;
}
void Emp::display()
{
	cout<<"\nEid ="<<eId;
	cout<<"\n Name ="<<ename;
	cout<<"\n Salary="<<eSalary;
}
int Emp::geteId()
{
	return eId;
}
