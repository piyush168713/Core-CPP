#include <iostream>
using namespace std;

class employee
{
    // private:
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }
    static void getCount(void){
        // cout<<id;    // throws an error
        cout<<"The value of count is "<<count<<endl;
    }
};

int employee :: count; //Default value is 0

int main()
{
    employee piyush, rohan, mohan;
    // count is the static data member of class employee
    // piyush.id = 1;
    // piyush.count = 1;   // cannot do this as id and count are private
    piyush.setData();
    piyush.getData();
    employee :: getCount();

    rohan.setData();
    rohan.getData();
    employee :: getCount();

    mohan.setData();
    mohan.getData();
    employee :: getCount();

    return 0;
}
