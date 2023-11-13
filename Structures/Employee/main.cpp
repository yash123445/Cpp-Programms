#include "company.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int choice =0;
	company c1(5);
	while (choice != 5)
	{
	    cout<<"\n\t\t1.Add Employee";
	    cout<<"\n\t\t2.search Employee";
    	cout<<"\n\t\t3.delete Employee";
	    cout<<"\n\t\t4.Display all Employee";
	    cout<"\n\t\t5.Exit";
	    cout<<"\n Enter your choice";
	    cin>>choice;
	    switch(choice)
	    {
		    case 1:
		    	{
		    		int eId;
		    		char name[20];
		    		int salary;
		    		cout<<"\n Enter the Employee Id,Name,Salary";
		    		cin>>eId>>name>>salary;
		    		Emp e1(eId,name,salary);
		    		c1.addEmp(e1);
				}
			    break;
		    case 2:
		    	{
		    		int eId;
		    		cout<<"\nEnter eid to search:";
		    		cin>>eId;
		    		c1.searchEmp(eId);
				}
			    break;
		    case 3:
		    	{
		    		int eId;
		    		cout<<"\n Enter the id to delete :";
		    		cin>>eId;
		    		c1.deleteEmp(eId);
		    		
				}
		    	break;
	        case 4:
	        	{
	        		c1.display();
				}
		    	break;
		    case 5:
		    	break;
		    default:
		    	break;
	    }
    }
	return 0;
}
