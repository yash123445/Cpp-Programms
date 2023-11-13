#include"employee.h"

class company
{
	int size,index;
	Emp *p;
	public:
		company(int);
		bool isEmpty();
		bool isFull();
		void addEmp(Emp &);
		void searchEmp(int);
		void deleteEmp(int);
		void display();
		~company();
};
