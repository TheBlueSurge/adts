#include "StackV.h"
#include <string.h>
#include <iostream>
using namespace std;

   int Stack::size()
   {
	   return data.size();
	
	}

   void Stack::push(int a){
	   data.push_back(a);
	   
   }

   void Stack::pop(){
	   cout << "An item will now be removed" << endl;
	   data.pop_back();
   }

   int Stack::top(){
	  return data.back();
   }

   void Stack::clear(){
	   while(data.empty() != 1){
		   data.pop_back();
	   }
   }

