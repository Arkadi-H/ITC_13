#include<iostream>
#include <string>

 using namespace std;
  

 
 class Student{
     public:
        string name;
        int mark;
        void set_name_mark(string name, int mark){
               name=name;
               mark=mark;
        }
        string get_name(){
        	return name;
        }

        int get_mark(){
              return mark;
        }
 };
