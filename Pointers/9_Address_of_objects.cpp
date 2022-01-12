//                      ADDRESS OF OBJECTS AND void POINTERS



// Program to declare void pointers and access member variables using void pointers.

#include<bits/stdc++.h>

class A{
    protected:
    int x;
    int y;
};

class B : public A{
    public:
    int z;
    B(){
        x=10;
        y=20;
        z=30;
    }
};

int main(){
    B b;
    int j;
    void *p = &b;        // declaration & initialization of void pointer

    for(j = 0; j<3; j++)
    printf("\nmember variable [%d] = %d", j+1, *((int*)p+j));
    // std::cout<<j+1<<" "<<((int*)p+j)<<std::endl;
    return 0;
}