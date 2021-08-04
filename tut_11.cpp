#include<iostream>
using namespace std;

int main(){

// ------------ Break and Continue statements in C++ ------------ //

    // for (int i = 0; i < 40; i++)
    // {        
    //     if (i==5){
    //     break; 
    // }
    // cout<<i<<endl;
    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     if(i==4){
    //         continue;
    //     }
    //     cout<<i<<endl;
    // }
    

// ------Applications of break and continue-----------//

    for (int j = 1; j <= 10; j++)
  {
    //cout << "j = " << j << endl;
    
        for (int i = 1; i <= 10; i++)
    {
      if (i == j + 1)
        break;  
      else
        cout << i << '\t';
    }
    cout << endl;
  }





    for (int j = 1; j <= 9; j++)
  {
    //cout << "j = " << j << endl;
    
        for (int i = 1; i <= 10; i++)
    {
      if (i == j + 1)
        continue;  
      else
        cout << i << '\t';
    }
    cout << endl;
  }

  
    return 0;
}
