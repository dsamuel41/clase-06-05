#include <iostream>
using namespace std;
int main ()
{
    int n=1;
    int i=0;
    cout <<"ingrese un numero entero \n" ;
    cin >> n;
    while (i<=10)
    {
        cout << i << "x" << n << "=" << n*i << "\n" ;
        i=i+1;

    }
    return 0;
    
}