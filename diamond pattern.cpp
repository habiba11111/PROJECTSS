#include <iostream>
using namespace std;

string diamond (int size){
    int row , space , stars;
    for (row = 1 ; row <= size ; row++){
        for (space = 1; space <= size - row; space++) {
            cout << " ";
        }
        for (stars = 1 ; stars <= 2 * row - 1; stars++){
            cout << "*";
        }
        cout << endl;

    }
    for (row = size -1; row >= 1; row--){
        for (space = 1; space <= size - row; space++){
            cout << " ";
        }
        for (stars = 1; stars <= 2 * row - 1; stars++){
            cout << "*";
        }
        cout << endl;
    }
}
int main(){
    int size;
    cin >> size;
    diamond(size);
    return 0;
}