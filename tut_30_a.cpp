#include<iostream>
using namespace std;

class point{
    int x, y;
    public:
    point(int a, int b){
        x = a;
        y = b;
    }

    void displaypoint(){
        cout<<"The point is ("<<x<<","<<y<<")"<<endl;
    }
};

int main(){
    point t(3,5);
    t.displaypoint();

    point z(6,8);
    z.displaypoint();
    return 0;
}