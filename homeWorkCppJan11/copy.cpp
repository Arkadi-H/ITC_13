#include <iostream>
#include <string.h>
using namespace std;




class Person{

   public:
    
   int age;
   char *name; 
    Person(int age, const char*name){
      this->age=age;
      this->name = new char(strlen(name) + 1 );
      strcpy(this->name,name);
   }
    
   void change_name(const char*new_name){
     delete [] this->name;
     this->name = new char(strlen(new_name)+1);
     strcpy(this->name,new_name);
   }
     
    void change_age(int new_age){
      this->age = new_age;
     }
    Person(Person &other_person){

       this->age = other_person.age;
       this->name = new char(strlen(other_person.name) + 1);
        strcpy(this->name,other_person.name);
    }
};



int main(){
   
   Person a(18, "Aaaa");
   Person b=a;
    cout<<"a"<< a.name << endl;
    cout<<"b"<< b.name  << endl;
    cout<<"a"<< a.age << endl;
    cout<<"b"<< b.age  << endl;

   b.change_name("Poxos");
   b.change_age(77);
     cout<<"a"<< a.name << endl;
     cout<<"b"<< b.name  << endl;
     cout<<"a"<< a.age << endl;
     cout<<"b"<< b.age  << endl;
 

  return 0;
}
