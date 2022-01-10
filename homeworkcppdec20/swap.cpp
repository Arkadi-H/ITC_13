#include <iostream>
using namespace std;
void swap_num(int *num1,int *num2){

int z=*num1;
    *num1=*num2;
   * num2=z;
}

int main(){

 int num1;
 int num2;
 
 cout <<"Enter number 1:";
 cin >> num1;
 cout <<"Enter number 2:";
 cin >> num2;
  swap_num(&num1,&num2);
  cout << num1 <<endl <<num2 <<endl;
  


return 0;
}
