 #include<iostream>
 #include <string>
 using namespace std;
  
 int strlen(char*str);
 bool bool_str(char*str1,char *str2);


 int main(){

    char str1[8]="hello";
    char str2[8]="hello";
   
    
       bool_str(str1,str2);
       
   if(bool_str(str1,str2)==true)
         cout<<"Equal";
       if(bool_str(str1,str2)!=true)
          cout<< "Not Equal";
        

       return 0;
    
}
 bool bool_str(char*str1,char*str2){
   int str1len=strlen(str1);
   int str2len=strlen(str2);
     
       if(str1len == str2len){
       
           for (int i=0; i<str1len;i++){
              for(int j=0 ;j<str2len;j++)
              if(str1[i] == str2[j]){
             
                  return true;
                 }else{
                  return false;
                 }


            }


    }      
              
     


}
int strlen(char*str){
  int length=0;
    while(str[length]!='\0'){
      ++length;
   }
   return length;
  }
