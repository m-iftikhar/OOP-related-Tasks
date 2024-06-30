#include<iostream>
using namespace std;
int main(){
  class myclass{
    public:
    int number;
    string name;
  };
  myclass obj1;   
//   set values
  obj1.number=23;
  obj1.name="iftikhar";


// acess the object 
  cout << obj1.name<< endl;

    return 0;
}