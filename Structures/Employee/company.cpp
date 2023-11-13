//#include"employee.h"
#include"company.h"

company::company(int s)
{
	size = s;
	index =-1;
	p = new Emp[size];
}
bool company::isEmpty()
{
	if(index == -1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool company::isFull()
{
	if(index == size-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void company::addEmp(Emp &e)
{
	if(isFull())
	{
		cout<<"Array is full";
	}
	else
	{
		p[++index] = e;
	}
}
void company::searchEmp(int id)
{
	if(isEmpty())
	{
		cout<<" No element to search";
	}
	else
	{
		for(int i =0;i<=index ; i++)
		{
			if(p[i].geteId() == id)
			{
				cout<<"Employee is found.";
				p[i].display();
				return;
			}
		}
		cout<<"Element not found.";
	}
}
void company::deleteEmp(int eId)
{
	int i;
	if(isEmpty())
	{
		cout<<"\n Nothing to delete Array is Empty";
	}
	else
	{
		for(i=0;i<=index;i++)
		{
			if (p[i].geteId()== eId)
			{
				break;
			}
		}
		if(i>index)
		{
			cout<<"\n Employee Id is not found";
		}
		else
		{
			while(i<index)
			{
				p[i]=p[i+1];
				i++;
			}
			index--;
		}
	}
	
}
void company::display()
{
	if(isEmpty())
	{
		cout<<"\n Array is Empty nothing to show";
	}
	for(int i=0;i<= index;i++)
	{
	p[i].display();
	cout<<"\n-----------------";	
	}
}
company::~company()
{
	if(p!=NULL)
	{
		delete []p;
	}
}
