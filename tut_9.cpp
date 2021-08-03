#include<iostream>
using namespace std;

int main(){
    
    int age;
    cout<<"Tell me your age: ";
    cin>>age;   


// /******** Selection control structure: If else - If else ladder **********/

    // if((age<18) && (age>0)){
    //     cout<<"You can not come to party\n";
    // }
    // else if(age==18){
    //     cout<<"You are a kid and you will get a kid pass for the party\n";
    // }
    // else if(age<1){
    //     cout<<"Invalid age";
    // }
    // else if (age<50){
    //     cout<<"You can come to party\n";
    // }   
    // else{
    //     cout<<"You are overaged";
    // }

// /******** Selection control structure: Switch case statements **********/

    switch (age)
    {
    case 18:
        cout<<"You are 18\n";
        break;
    case 22:
        cout<<"You are 22\n";
        break;
    case 3:
        cout<<"You are 3\n";
        break;

    default:
    cout<<"No special cases";
        break;
    }
    cout<<"Done with switch case";

    return 0;
}
