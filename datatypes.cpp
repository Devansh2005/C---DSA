#include <iostream>
using namespace std;

int main(){
    int a =400;
    bool b = false;
    char c = 'v';
    float f = 1.2;
    double d= 1.23;


    cout << b <<endl;
    cout << a <<endl;  
    cout << c <<endl; 
    cout << d <<endl; 
    cout << f <<endl; 

    cout << "sizes of the variables" "\n";

    int size_a_ka = sizeof(a);
    cout << size_a_ka <<endl;

    int size_b_ka = sizeof(b);
    cout << size_b_ka <<endl;

    int size_c_ka = sizeof(c);
    cout << size_c_ka <<endl;

    int size_d_ka = sizeof(d);
    cout << size_d_ka <<endl;

    int size_f_ka = sizeof(f);
    cout << size_f_ka <<endl;

    unsigned int ne = -2 ;
    cout << ne << endl;
}