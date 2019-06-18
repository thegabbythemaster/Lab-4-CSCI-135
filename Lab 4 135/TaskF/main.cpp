#include <iostream>
using namespace std;
 int main() {
 int width, height;
 int spaces=0;
 int stars = width;
 cout << "Input a width: " << endl;
 cin >> width;
 cout << "Input a height: " << endl;
 cin >> height;
 cout << "Shape: " << endl;

    if (((height+width)%2 != 0)&&(height>(width/2))) {
        cout << "Impossible Shape!" << endl;
        return 0;
    }
 else if (height>((width/2)+1)) {
        cout << "Impossible Shape!" << endl;
        return 0;
    }
 else {
    for (int row = 0; row < height; row++) {
        for (int col = 0; col < width; col++) {
            if ((col>=row) && ((row+col)<=(width-1))) {
                spaces += 1; stars -= 2;

                cout <<"*";
    }
 else {
 cout << " ";
 }
 }
 cout << endl;
 }
 }
 }