 #include <iostream>
  using namespace std;
   
   int  print_func_arr  (int arr[8][8]);
   int  get_access_cout (int i, int j);
   void fill_board (int (*array)[8]);
   int  access_plus_2i (int i, int j);
   int  access_plus_1i (int i, int j);
   int  access_minus_2i (int i, int j);
   int  access_minus_1i (int i, int j);
   bool check_is_in_board (int a, int b);
   int input_row_col(int arr[8][8],int row,int col);
  void iterate_on_board();
    int main(){
         int arr[8][8] = {{0},{0}};
         int i, j;
         int result;
         int row;
         int col;
          fill_board (arr);
         input_row_col(arr,row,col);
           
   }
 
  int print_func_arr (int arr[8][8]) {
          for (int i = 0; i < 8; i++){
             for (int j = 0; j < 8; j++)
                  cout << " " << arr[i][j];
                  cout << endl;
             }
             
          
           cout << endl;
          return 0;
  }
 
 
    bool check_is_in_board(int a, int b){
           if(a <= 7 && a >= 0 && b <= 7 && b >= 0){
              return true;
           }
           return false;
   }
 
   int get_access_cout(int i, int j){
   int result = access_plus_2i(i,j) + access_plus_1i(i,j) + access_minus_2i(i,j) + access_minus_1i(i,j);
 
           return result;
  }
 
   void fill_board(int (*array)[8]){
           for (int i =0; i<8; i++){
                for (int j=0; j<8; j++)
                   array[i][j] =get_access_cout(i, j);
                    
          }
           print_func_arr(array);
  }

    int access_plus_2i(int i, int j){
           int access_count = 0;
          if (check_is_in_board (i + 2, j + 1)){
                  access_count++;
           }
           if (check_is_in_board (i + 2, j - 1)){
                   access_count++;
           }
           return access_count;
  }
 
      int access_plus_1i(int i, int j){
         int access_count = 0;
           if (check_is_in_board (i + 1, j + 2)){
                   access_count++;
          }
          if (check_is_in_board (i + 1, j - 2)){
                  access_count++;
           }
           return access_count;
   }
  
      int access_minus_2i(int i, int j){
          int access_count = 0;
           if (check_is_in_board (i - 2, j - 1)){
                   access_count++;
           }
           if (check_is_in_board (i - 2, j + 1)){
                   access_count++;
           }
            return access_count;
    }
  
   int access_minus_1i(int i, int j){
           int access_count = 0;
           if (check_is_in_board (i - 1, j - 2)){
                   access_count++;
            }
           if (check_is_in_board (i - 1, j + 2)){
                   access_count++;
           }
          return access_count;
     }

  
int input_row_col(int arr[8][8],int row,int col){
   cout<<"Enter row";
           cin>> row;
            cout<<"Enter col";
           cin>>col;
           int  x=9;
           arr[row][col]=x;
         print_func_arr (arr);
         
        return 0;
        

}

 void iterate_on_board(){
    for(int i=1;i<64;i++){
}


}
