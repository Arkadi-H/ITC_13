#include <iostream>
using namespace std;

int sort(int* arr,int elsize);


int main(){

int arr_num[]={2,1,3,-1,7};

int elsize=sizeof(arr_num)/sizeof(int);

int *newarray;
newarray=arr_num;
  sort(arr_num,elsize);


return 0;

}

int sort(int* arr,int elsize){
int newarry[elsize]={};

 for (int i=0; i<elsize;i++){
     for(int j=1;i>j;j++){
      if(arr[i]>arr[i+1]){
	      newarray=arr[i];
              arr[i]=arr[j];
              arr[i]=newarray;
}
      }

    }
   
 }

