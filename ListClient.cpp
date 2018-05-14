#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2;

 //Do some stuff with L1, L2, ...
 // ...
	L1.insert(1,1);
	L1.insert(12,2);
	L1.insert(33,3);
	L1.insert(42,4);
	
	L2.insert(5,1);
	L2.insert(9,2);
	L2.insert(17,3);
	L2.insert(19,4);
	
	cout << "The Third element of list 1 is : " << L1.ReturnElement(3) << endl;
	cout << "The third element of list 2  is " << L2.ReturnElement(3)<< endl;
	
	
	cout << "The size of list 1 is : " << L1.size() << endl;
	cout << "The size of list 2 is : " << L2.size() << endl;
	
	cout << "Element 2 in list 1 and two are: " << L1.ReturnElement(2) << " " <<  L2.ReturnElement(2) << endl;
	
	cout << "Element 2 of list 1 and 2 will now be removed" << endl;
	
	L1.remove(2);
	L2.remove(2);
	
	cout << "Element 2 in list 1 and two are: " << L1.ReturnElement(2) << " " <<  L2.ReturnElement(2) << endl;
		
	cout << "The size of list 1 is now : " << L1.size() << endl;
	cout << "The size of list 2 is now :" << L2.size() << endl;
	
	cout << "All elements from list 1 and 2 will be removed now" << endl;
	L1.clear();

	cout << "The size of list 1 is now: " << L1.size() << endl;
	

}
