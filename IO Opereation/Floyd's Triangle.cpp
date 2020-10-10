// Floyd's Triangle : Make a Floid's Triangle (increasing value from 1 to n in a triangle)

#include <iostream>
using namespace std;
int main() {int rows, number = 1;

    
    cin >> rows;

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << number;
            ++number;
        }

        cout << endl;
    }

     
	return 0;
}