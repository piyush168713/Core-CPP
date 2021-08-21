// Calculate a function (Hint: Make it a friend function) which takes 2 point objects and computes the distance b/w those points.

#include<iostream>
#include<math.h>
using namespace std;

class point{
    int x, y;
    friend void distance(point, point);
    public:
    point(int a, int b){
        x = a;
        y = b;
    }

    void displaypoint(void){
        cout<<"The point is ("<<x<<","<<y<<")"<<endl;
    }
};

void distance(point p1, point p2){
        float dis = sqrt(((p2.x - p1.x) * (p2.x - p1.x)) + ((p2.y - p1.y) * (p2.y - p1.y)));
        cout<<"The distance b/w two points is "<<dis<<"."<<endl;
    }


int main(){
    point p(3,0);
    p.displaypoint();

    point q(7,0);
    q.displaypoint();

    distance(p, q);
    return 0;
}