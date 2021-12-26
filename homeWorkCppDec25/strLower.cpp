#include <string>
#include <iostream>

using namespace std;
 
void str_lower(char*str);
int strlen(char*str);



  int main(){
   

    char str[8];
     cout<< "Enter string";
     cin>> str;
     str_lower(str);
      return 0;
    }


void str_lower(char*str){
  int len=strlen(str);
    int ascii;

  for(int i=0;i<len;i++){
    if(str[i]>='A' && str[i]<='Z'){
    
         ascii=str[i];
         ascii=ascii+32;
          str[i]=ascii;
       }
    }
    cout << str << endl;
 }

int strlen(char*str){
  
  int length=0;
   
    while(str[length] !='\0'){
        ++length;
    }
    return length;

}
