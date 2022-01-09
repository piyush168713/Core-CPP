#include<iostream>
using namespace std;

class Gradebook {
    public:
    void messagedisplay (string coursename) const {
        cout<<"Welcome to gradebook "<<coursename<<endl;
    }
};


int main(){
    string nameofcourse;
    Gradebook g;
    cout<<"Please enter the course name: "<<endl;
    cin>>nameofcourse;
    g.messagedisplay(nameofcourse);
    
    return 0;
}