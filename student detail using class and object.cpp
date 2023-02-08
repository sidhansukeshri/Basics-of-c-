#include <iostream>  
using namespace std;  
class Student {  
   public:  
      int id;    
      string name;     
};  
int main() {  
    Student s1; 
    cout<<"ENTER YOUR ROLL NUMBER: ";
    cin>>s1.id; 
    cout<<"ENTER YOUR NAME: ";
    cin>>s1.name; 
    cout<<"STUDENTS DETAILS ARE:\n"<<"ROLL NO: "<<s1.id<<"\nNAME: "<<s1.name<<endl;  
}  
