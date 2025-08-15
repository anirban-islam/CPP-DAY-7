#include<iostream>
using namespace std;

//A constructor is a special method that is automatically called when an object of a class is created.
//To create a constructor, use the same name as the class, followed by parentheses ():
class myClass{
public:
    myClass(){ //constructor
    cout<<"That's The constructor"<<endl;
    };
};



//Constructor Rules
//The constructor has the same name as the class.
//It has no return type (not even void).
//It is usually declared public.
//It is automatically called when an object is created

// constructor with parameters

class book {
public:
    string title;
    string author;
    int publishYear;

    // Constructor with correct parameter types
    book(string x, string y, int z) {
        title = x;
        author = y;
        publishYear = z;
    }
};

int main(){
myClass myObj;

book book1("Miracle Morning ", "Hal Elroad" , 2020);
book book2("Miracle Morning 2  ", "Hal Elroad 2" , 2020);


cout << book1.title << " by " << book1.author << " (" << book1.publishYear << ")" << endl;
cout << book2.title << " by " << book2.author << " (" << book2.publishYear << ")" << endl;
return 0;
}
