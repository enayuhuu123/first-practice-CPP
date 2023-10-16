#include <iostream>
using namespace std;

int main() {

    int space, rows;

    cout <<"Enter number of rows: ";
    cin >> rows;

    for(int i= 1, k = 0; i <= rows; ++i, k = 0){
        for(space = 1; space <= rows-1; ++space){
            cout <<"* ";
        }

        while(k != 2*i-i){
            cout << "* ";
            ++k;
        }
        cout << endl;
    }
    return 0;
}
