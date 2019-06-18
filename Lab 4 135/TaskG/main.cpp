#include <iostream>

using namespace std;
int main()

{
    int rowcount=0, colcount=0;
    bool rowstar = true; //if rowstar true, put star in that row
    bool colstar = true; //if colstar true, put star in that column
    int width, height;
cout << "Please enter a width: " << endl;
    cin >> width;
    cout << "Please enter a height: " << endl;
    cin >> height;
    cout << "Shape: " << endl;
    for (int row=0; row<height;row++)

    {
        if (rowcount==3)
        {
            rowstar = not(rowstar);
            rowcount = 0;

        }
        if (rowstar == 1)
            colstar = 1;
        else
        colstar = 0;
        for (int col = 0; col < width; col++)
        {
            if (colcount == 3)
            {
                colstar = not(colstar);
                colcount = 0;
            }
            if (colstar == true)
            cout << "*";

            else
                cout << " ";
            colcount = colcount+1;
        }
        rowcount = rowcount+1;
        colcount = 0;
        cout << endl;
    }
    return 0;
}