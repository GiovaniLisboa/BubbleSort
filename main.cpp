#include <stdlib.h>
#include <iostream>
using std:: cout;
using std:: cin;

bool trocar (int &, int &);
bool trocar (double &, double &);

int main(int argc, char **argv)
{
    int a = 14;
    int b = 10;
    int c = 13;
    int d = 7;
    int e = 11;
    const int NITER = 5;
    int cont = 0;
    
    cout << "A: " << a << "\n";
    cout << "B: " << b << "\n";
    cout << "C: " << c << "\n";
    cout << "D: " << d << "\n";
    cout << "E: " << e << "\n";
    cout << "\n";

    for (int i = 0; i < NITER - 1; i++)
        for ( )
        if (trocar(a, b))
            cont++;
        if (trocar(b, c))
            cont++;
        if (trocar(c, d))
            cont++;
        if (trocar(d, e))
            cont++;
    }
    
    cout << "Trocas: " << cont << "\n";
    cout << "\n";
    cout << "A: " << a << "\n";
    cout << "B: " << b << "\n";
    cout << "C: " << c << "\n";
    cout << "D: " << d << "\n";
    cout << "E: " << e << "\n";
    
    cout << "\n";
    return 0;
}

bool trocar (int &x, int &y)
{
    int temp;
    
    if (x > y)
    {
        temp = x;
        x = y;
        y = temp;
        return true;
    }
    else return false;
}

bool trocar (double &x, double &y)
{
    int temp;
    
    if (x > y)
    {
        temp = x;
        x = y;
        y = temp;
        return true;
    }
    else return false;
}