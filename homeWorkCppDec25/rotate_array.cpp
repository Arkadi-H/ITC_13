#include <iostream>
 using namespace std;


void print_array(int arr[0][0],int row,int col){

     for(int i=0; i<row; i++)
          {
                 for(int j=0; j<col; j++)
                 {
                          cout<<" ";
                          cin>>arr[i][j];
                  }
          }
          cout<<"\n";
          for(int i=0; i<row; i++)
 
        {
                  for(int j=0; j<col; j++)
                  {
                          cout<<" "<<arr[i][j]<<" ";
                  }
                  cout<<"\n";
          }


   }
 

 int main(){
    
        int arr[0][0];
         int row;
         int col;
        cout<<" Enter Row";
        cin>>row;
        cout<<"Enter Col";
        cin>>col;
        cout<<row<<"*"<<col<<" \n";
            

        print_array(arr,row,col);       
         
      return 0;
    }

