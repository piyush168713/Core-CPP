#include<iostream>
using namespace std;

class employee{
    // private:
    int id;
    static int count;

    public:
        void setData(void){
            cout<<"Enter the id "<<endl;
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"The id of this employee is "<<id<<" and this is employee number "<<count<<endl;
        }
};

    int employee :: count;   //Default value is 0

int main(){
    employee piyush, rohan, mohan;
    // piyush.id = 1;
    // piyush.count = 1;   // cannot do this as id and count are private 
    piyush.setData();
    piyush.getData();

    rohan.setData();
    rohan.getData();

    mohan.setData();
    mohan.getData();
    return 0;
}