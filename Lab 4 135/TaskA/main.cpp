#include <iostream>
using namespace std;
int main (){
    int w;
    int h;
    
    cout <<"Input width: "<< endl;
    cin >> w;
    cout <<"Input height: "<< endl;
    cin >> h;
    
    cout <<"Shape: "<<endl;
    
    for(int i = 0; i <= h; i++){
        for(int j = 0; j<= w; j++){
            cout <<"*";
        }
        cout<< endl<<endl;
    }
    return 0;
}