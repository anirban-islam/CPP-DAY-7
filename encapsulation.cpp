#include<iostream>
using namespace std;

//The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users.

//To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class).

//If you want others to read or modify the value of a private member, you can provide public get and set methods.

class stuff{
private:
    int salary;

public:
    //set salary
    void setSalary(int s){
     salary=s;
    };
    //get salary  function
    int getSalary(){
    return salary;
    }
};


int main(){
stuff stuff1;
//set salary using set function

stuff1.setSalary(5000);

//get salary using get function
int salary = stuff1.getSalary();

cout<<salary;

return 0;
}
