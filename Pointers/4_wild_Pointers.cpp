//                               WILD POINTERS

// When a pointer points to an unallocated memory location or to a data value whose memory is de-allocated, called wild Pointer.
// The wild pointer generates garbage memory location and pendent reference.


// Program to use wild pointer.

// #include<bits/stdc++.h>

// int main(){
//     int *x;            // Pointer x is declared but not initialized.
//     for (int i = 0; i < 10; i++)
//     std::cout<<x[i]<<" ";
    
//     return 0;
// }






// Program to display the output when a pointer is accessing a temporary data of the memory.

#include<bits/stdc++.h>

char *instring();
char *inchar();

int main(){
    char *a, *b;
    a = instring();
    b = inchar();

    std::cout<<"String = "<<*a;
    std::cout<<"Character = "<<*b;
}

char *instring(){
    char str[] = "CPP";
    return str;
}
char *inchar(){
    char g;
    g = 'D';
    return &g;
}