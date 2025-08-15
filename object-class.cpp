#include<iostream>
using namespace std;


//C++ is an object-oriented programming language.
//Everything in C++ is associated with classes and objects,
//along with its attributes and methods. For example: in real life,
//a car is an object. The car has attributes, such as weight and color,
//and methods, such as drive and brake.
//A class is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects.

//To create a class, use the class keyword:

//Create an Object
//In C++, an object is created from a class
//To create an object of MyClass, specify the class name, followed by the object name.
//To access the class attributes (myNum and myString), use the dot syntax (.) on the object:


//create an object for books-data


//class keyword for create a class
class booksData{
//access specifier -public
//thats means we can access that data from any scope
public:
    string title;
    string auther;
    int publishYear;
};


int main(){
//Now we create an object from the class
//crate object from the booksdata to book1 as an object.
booksData book1;
//now access the class member using ( .).
//assigin value
book1.title = "Miracle Morning";
book1.auther ="HAl Elroad";
book1.publishYear=2016;


//print book1 object data
cout<<" \t Object Data Print" << endl<<book1.title<<endl<<book1.auther<<endl<<book1.publishYear<<endl;


//create multiple object

booksData book2;
book2.title = "Returning to Manderley";
book2.auther ="Jhonathon Smith";
book2.publishYear=2019;


booksData book3;
book3.title = "Motion Picture Arts and Sciences";
book3.auther ="Eliana Queen";
book3.publishYear=2022;

booksData book4;
book4.title = "One Hand Rules";
book4.auther ="Anirban";
book4.publishYear=2017;

//print multiple  book data
cout<<" \t Book-1" << endl<<book1.title<<endl<<book1.auther<<endl<<book1.publishYear<<endl<<endl<<endl;
cout<<" \t Book-2" << endl<<book2.title<<endl<<book2.auther<<endl<<book2.publishYear<<endl<<endl<<endl;
cout<<" \t Book-3" << endl<<book3.title<<endl<<book3.auther<<endl<<book3.publishYear<<endl<<endl<<endl;
cout<<" \t Book-4" << endl<<book4.title<<endl<<book4.auther<<endl<<book4.publishYear<<endl<<endl<<endl;
return 0;
}
