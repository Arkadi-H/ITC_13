#include<iostream>

using namespace std;

  void to_upper_case(char x, int ascii){
  if(x >= 'a' && x<='z'){
     ascii=x;
     ascii=ascii-32;
     x=ascii;
cout << x << "\n" ;
  }else{
  
  cout <<"Alrady in Uppercase:"<<"\n";
  }
  }
void to_lower_case(char x,int ascii){
   if(x>= 'A' && x<='Z'){
   ascii=x;
   ascii=ascii+32;
   x=ascii;
   cout <<x <<"\n";
   }else{
    cout <<"Alredy in Lowercase:"<<"\n";
   }
}

void  root(char x,int ascii){
   if(x>= 'a' && x<='z'){
	   to_upper_case(x,ascii);

    
   }else if (x>='A' && x<='Z'){
	    to_lower_case(x,ascii);
      
   }else{
   
   cout <<"is not a latter:" <<"\n";
   }

}
int main(){
 int ascii;
	char x;
	cout<< "Enter letter:";
	cin >> x;
	root(x,ascii);

return 0;
}



