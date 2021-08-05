#include<iostream>
using namespace std;

int main(){
// ------------ Arrays and Poiners Arithmetic in C++ ------------ //

    int marks[4] = {23, 45, 34, 43};
    int mathmarks[4] = {566, 354, 346, 656};

    // cout<<"These are mathmarks:"<<endl;
    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl;
    // cout<<mathmarks[2]<<endl;
    // cout<<mathmarks[3]<<endl;

    // cout<<"These are marks:"<<endl;
    // We can change the value of an array
    // marks[2] = 435;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;   
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

//for loop
    // for (int i = 0; i < 4; i++)    // for loop
    // {
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    // }

// Quick Problem : Do the same with the help of while and do while loops
 
    //While Loop
    // int i=0;
    // while (i<4)
    // {
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }

    //do while loop
    // int i = 0;
    // do
    // {
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // } while (i<4);
    

// Pointers and Arrays
    int* p = marks;

    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    
    // cout<<"The value of *p is "<<*(p)<<endl;    
    // cout<<"The value of *(p+1) is "<<*(p+1)<<endl;    
    // cout<<"The value of *(p+2) is "<<*(p+2)<<endl;    
    // cout<<"The value of *(p+3) is "<<*(p+3)<<endl;   

// using for loop
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"The value of *(p+"<<i<<")"<<" is "<<*(p+i)<<endl;
    // }
     
    
    
    
    return 0;
}