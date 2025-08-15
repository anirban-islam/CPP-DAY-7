#include<iostream>
using namespace std;

//There are two ways to define functions that belongs to a class:
    //Inside class definition
    //Outside class definition

class dog{
public:
    string name;
    //inside class function
    void codeby(){
        cout<<"Code By Anirban";
    };
};

class Cat{
 public:
    string name;
    //outside function
    void myMethod();

};
//// Method/function definition outside the class
void Cat::myMethod() {
  cout << "Hello World!";
}


int main(){
//Dog Class to create an object
dog dog1;
dog1.name="Meddy";
//print fog 1 object including the function
cout<<dog1.name<<endl<<"Inside Function Call :  ";
//call class function
dog1.codeby();

Cat cat1;
cat1.name ="Billi";
cout<<endl<<endl<<endl<<cat1.name<<"Outside Function Call : ";
cat1.myMethod();

return 0;
}
