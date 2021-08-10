
    // oops -- classes and objects
    // class --> extensions of structure (in C)

    // structures and Limitations
    // ---> members are public
    // ---> No methods
    // classes ---> structures + more
    // classes ---> can have methods and properties
    // classes ---> can have few mwmbers as private & few as public
    // structures in C++ are typedefed
    // you can declare object along with the class declaration like this:
    /* class employee{
        // class definition
    } piyush, kumar, rohan; */

    // piyush.salary = 8 makes no sense if salary is private

    // Nesting of member functions

#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);                          // ---> who are you?  means identity
    void chk_bin(void);                          // ---> who are you?  means identity
    void ones_compliment(void);                          // ---> who are you?  means identity
    void display(void);                          // ---> who are you?  means identity

};

void binary :: read(void){                      // ---> what's ur work,,,
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}

void binary :: chk_bin(void){                      // ---> what's ur work,,,
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }     
    }
    
}

void binary :: ones_compliment(void){                      // ---> what's ur work,,,
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0'){
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        }
    }

}

void binary :: display(void){                      // ---> what's ur work,,,
    cout<<"\nDisplaying your Binary number"<<endl;
    for (int i = 0; i < s.length(); i++){
        cout<<s.at(i);
    }

}

int main()
{
    binary b;
    b.read();                                             // ---> show me your work
    b.chk_bin();                                          // ---> show me your work
    b.display();                                          // ---> show me your work
    b.ones_compliment();                                  // ---> show me your work
    b.display();                                          // ---> show me your work

    return 0;
}