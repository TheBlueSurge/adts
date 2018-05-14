#include "List.h"
#include <iostream>
#include <stdexcept>//used to be able to "throw" exceptions

using namespace std;


class List::Node //self-referential Node class
{
	public:
	   int data = 0;
	   Node* link = nullptr;
	   //link is a data member which is a pointer 
	   //to an object of the same type (i.e. Node)
	
	};//end Node class definition (can only be seen by the List class)


List::~List()
{
    while(num_elements > 0)
      remove(1);
}
	
int List::size()
 {
    return num_elements;
 }

void List::insert(int val, int k)
{
	if (k < 1 or k > num_elements +1) //if the location is invalid
	     throw out_of_range("List::insert("+to_string(val)+", " +to_string(k)+") failed. (valid indices are 1 to "+to_string(num_elements+1)+")");//throw an "out_of_range" exception
	
	
	Node* newPtr = new Node{val};
	
	if(k == 1)
	{
	  newPtr->link = frontPtr;
	  frontPtr = newPtr;
	 }
	else
	 {  
	
	  Node* tmpPtr = frontPtr;
	  int loc = 1; 
	  
	    while( loc != k-1) //get pointer to (k-1)th node
	     {
		tmpPtr = tmpPtr->link;
		loc++;
	     }
	
	  newPtr->link = tmpPtr->link;
	  tmpPtr->link = newPtr;  
        }//end else

     num_elements++;
 }

void List::remove(int k)
{
	if (k < 1 or k > num_elements)//if the location is invalid 
	     throw out_of_range("List::remove(" +to_string(k)+") failed. (valid indices are 1 to "+to_string(num_elements)+")");//throw an "out_of_range" exception
	
	Node* delPtr;
	
	if(k == 1)
	{
	  delPtr = frontPtr;
	  frontPtr = frontPtr->link;
	 }
	 else
	 {
	    Node* tmpPtr = frontPtr;
		
	    int loc = 1;
            
            while(loc != k-1)//get pointer to (k-1)th node
	    {
	       tmpPtr = tmpPtr->link;
		loc++;
	    }
	
	    delPtr = tmpPtr->link;
	    tmpPtr->link = delPtr->link;
	  }
	
	delete delPtr;
	num_elements--;
	}
	
	//Implementations of missing operations
	
void List::clear()
{
	string ErasureAnswer;
	Node* delPtr;
	
	cout << "Are you sure you want to delete this entire list? (Yes/No)" << endl;
	cin >> ErasureAnswer;
	
	if (ErasureAnswer == "Yes"){
		if(num_elements == 0){
			cout << "List is empty. Nothing to delete." << endl;
			system("pause");
		}
		
		else{
			int j = 1;
			int l = num_elements;
			
			for(j = 1; l > j-1; l--)
			{
				delPtr = frontPtr;
				frontPtr = frontPtr->link;
				delete delPtr;
				num_elements--;		
				Node* delPtr;	
			}	 
		}
	}
	
	else if(ErasureAnswer == "No")
	{
		cout << "Okay. Have a nice day :D " << endl;
		system("pause");
	}
	/*if(k == 1)
	{
	  delPtr = frontPtr;
	  frontPtr = frontPtr->link;
	 }
	 
	 {
	    Node* tmpPtr = frontPtr;
		
	    int loc = 1;
            
            while(loc != k-1)//get pointer to (k-1)th node
	    {
	       tmpPtr = tmpPtr->link;
		loc++;
	    }
	
	    delPtr = tmpPtr->link;
	    tmpPtr->link = delPtr->link;
	  } */

	}
	
int List::ReturnElement(int k)
{
	  Node* getValPtr = frontPtr;
		
	    int runner = 1;
	    int getVal = 0;
            
            while(runner != k)//get pointer to (k)th node
	    {
	       getValPtr = getValPtr->link;
		runner++;
	    }
		
		getVal = getValPtr -> data;    
		return getVal;
}

