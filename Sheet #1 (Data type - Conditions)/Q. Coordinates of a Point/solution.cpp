#include <iostream>
#include <string>

using namespace std;

double x,y;

int main() {
    cin >> x >> y;

    if (x == 0 && y == 0)
        cout << "Origem" << endl;

    else if (y == 0)
        cout << "Eixo X" << endl;
    
    else if (x == 0)
        cout << "Eixo Y" << endl;
    
    else if ( x > 0 and y > 0)
        cout << "Q1" << endl;
    
    else if ( x < 0 and y > 0)
        cout << "Q2" << endl;

    else if (x < 0 and y < 0)

        cout << "Q3" << endl;
    else
        cout << "Q4" << endl;
}