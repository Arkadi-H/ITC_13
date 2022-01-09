 #include <iostream>
using namespace std;


  class Node {
 
   public:  
      int data;
      Node *next;
          
       };

    
    void print_list(Node* n){
                        
               while (n != NULL){
        
                  cout << n ->data <<endl;
                  n = n->next;
                  cout<< n<<endl;  
              }

       }
  

   int main (){
       

         Node *head = new Node();
         Node *second = new Node();
         Node *third = new Node();
     
          head->data=5;
          head->next=second;
    
          second->data=10;
          second->next=third;
        
          third->data=15;
          third->next=NULL;

             print_list(head);    
             
      return 0;
    }
