#include <iostream>
using namespace std;
void print_array(int*x,int elsize){

for(int i=0;i<=elsize;i++){
   cout<< x[i]<< endl;
 }

}
int main() {
 int num[]={1,2,3,4};

int elsize=sizeof(num)/sizeof(int);

 int* newarray;
 newarray=num;

  print_array(newarray,elsize);
  
  return 0;
}


 
