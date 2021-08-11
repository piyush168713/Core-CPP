#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;

public:
    void setID(void)
    {
        salary = 100;
        cout << "Enter the id of employee " << endl;
        cin >> id;
    }
    void getID(void)
    {
        cout << "The id of the employee is " << id << endl;
    }
};

int main()
{
    // employee piyush, sonal, rohan, mohan;
    // piyush.setID();
    // piyush.getID();

    employee nissan[4];     // for greater no. of employees  i.e. 10000  so, use arrays with loop

    for (int i = 0; i < 4; i++)
    {
        nissan[i].setID();
        nissan[i].getID();
    }

    // nissan[0].setID();
    // nissan[0].getID();

    // nissan[1].setID();
    // nissan[1].getID();

    return 0;
}