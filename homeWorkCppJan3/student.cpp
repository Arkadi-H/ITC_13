 #include<iostream>
 #include <string>
   using namespace std;
   #define MESSAGE "Add new student ?"
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
   
    class Room{
      public:  
        Student * students;
          void register_student(int index){
            string name;
            int mark;
            //int size=sizeof(students)/sizeof(Student);
             
                cout<<"Enter name"<< endl;
                cin >> name;
               
                cout <<"Enter mark number" << endl;;
                cin >> mark;
               
    
             students[index].set_name_mark(name,mark);
          
                cout<< name<<endl;
                    cout<< mark<<endl;

             
        }
            void print_student(int size ){             
            
 
            
              for(int s=0;s<size;s++){
	    
                  cout <<"name is:"<<students[s].get_name()<< "\nmark is:"<< students[s].get_mark()<<endl;
                }
               
             }    
         Room(int size){
            
            students=new Student[size];
            
          }

        // ~Room(){
        //  delete [] students;    
      //  }
     };
  
  int main(){
          
           
            int index=0; 
            string name;
            int mark=0;
            string answer;
            Room* P = new Room(5);

          do{

               P->register_student(index);
               cout<<MESSAGE<<endl;
               cin>>answer;

            }while(answer=="Y");


             P->print_student(index);
                  
           
         
         
          
  
          return 0;
  }
