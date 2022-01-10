#include <iostream>
using namespace std;

 void print_array(int* arr,int elsize, int x){
  
for(int i=0;i<=elsize;i++){
        if(i%4==0){
	 arr[i+3]=100;
	
	}
	cout<< arr[i]<<endl;
 }

}


int main(){

 int num[]={1,2,3,4,5,6,7,8,9,10,11,12,13};
 int elsize=sizeof(num)/sizeof(int);
 int* newarray;
 newarray=num;
int x=100;

print_array(newarray,elsize,x);



return 0;
}
