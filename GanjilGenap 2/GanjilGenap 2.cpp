
#include <iostream>
using namespace std;

int main()
{

    srand(time(0));
    int nBilA, nBilB;
    string status;

    nBilA = rand() % 11;
    nBilB = rand() % 11;

    if (nBilA == nBilB) {
        status = "Bilangan sama";
    }
    else if (nBilA > nBilB) {
        status = "bilangan a lebih besar dari bilangan b";
    }
    else {
        status = "bilangan A lebih kecil dari bilangan b";
    }
    cout << "bilangan" << nBilA << endl;
    cout << "bilangan" << nBilB << endl;

    cout << status << endl; 
}

    

    
  
    

