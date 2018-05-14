#include "StackL.h"
	
	int Stack::size(){
		return data.size();
	}

   void Stack::push(int z){
		data.insert(z,1);
   }

   void Stack::pop(){
	   data.remove(1);
   }

   int Stack::top(){
	  return data.ReturnElement(1); 
   }

   void Stack::clear(){
	   data.clear();
	   
   }
