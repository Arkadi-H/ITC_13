#include <iostream>
#include <string>
#include "student.h"
#include "classRoom.h"

 using namespace std;
   


     class Room : public classRoom{
        public:
              Student * students;
           void register_student(int index) override{
              string name;
              int mark;
              cout<<"Enter name"<< endl;
              cin >> name;
              cout <<"Enter mark number" << endl;;
              cin >> mark;
              students[index].set_name_mark(name,mark);
              cout<< name<<endl;
              cout<< mark<<endl;
          }
           void print_student(int size ) override {
                for(int s=0;s<size;s++){
     			cout <<"name is:"<<students[s].get_name()<< "\nmark is:"<< students[s].get_mark()<<endl;
                }
           }
          Room(int size){
              students=new Student[size];
          }

};

