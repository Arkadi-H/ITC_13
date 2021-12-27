#include<iostream>
using namespace std;

struct Person{
   
   int age;

  
   int set_age(int a){
  if(a>0){
       age=a;
      }else{
         cout<<"Error"<<endl;
       }
        return 0;
      }
    void get_age(){

      cout<< age<<endl;
    }
 };
  
int main(){
   Person Hamo;
   Hamo.set_age(77);
   Hamo.get_age();
  return 0;
}

 
