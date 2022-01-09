#include<iostream>
using namespace std;

class Gradebook {
    private:
    string coursename;
    public:
    void setcoursename(string name){
        coursename = name;
    }

            //Data members are accessible from a class's member functions****


    string getcoursename() const {   // this function(getcoursename) specifies that it returns a string   
        return coursename;       // this function(getcoursename) uses a return statement to return a reult to the calling function
    }                           // in this case, a string ,as specified by function's return type.....***All about getcoursename***.

    void displaymessage() const {
        cout<<"Welcome to the Grade book for "<<getcoursename()<<endl;
    }

    
};

int main(){
    string nameofcourse;
    Gradebook g;
    cout<<"Initial coursename is: "<<g.getcoursename()<<endl;  
    // Display the initial cousename by calling the object's getcoursename member function**
    // The first line of output don't show a coursename bcoz the object's coursename data member(string) is initially empty***
    // By default --- the initial value of a string is the so-called empty string***

    cout<<"Please enter the course name: ";
    cin>>nameofcourse;

    g.setcoursename(nameofcourse);
    cout<<endl;
    g.displaymessage();

    return 0;
}