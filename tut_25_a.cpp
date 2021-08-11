#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        // cout<<"Enter 1st no. "<<endl;
        // cin>>a;
        // cout<<"Enter 2nd no. "<<endl;
        // cin>>b;

        a = v1;
        b = v2;
    }
    void setDatabysum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printnumber(void)
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.setData(1, 3);
    c1.printnumber();

    c2.setData(2, 5);
    c2.printnumber();

    c3.setDatabysum(c1, c2);   
    c3.printnumber();

    return 0;
}