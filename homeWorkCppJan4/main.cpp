#include <iostream>
#include <string>
#include "room.h"
//#include "classRoomSingl.h"
using namespace std;

#define MESSAGE "Add new student ?"
  


int main(){


     int index=0;
     string name;
     int mark=0;
     string answer;
    
         Room* P= new  Room(5);
            P->register_student(index);
             P->print_student(index);  
  
 
            

  
 

    return 0;
}
