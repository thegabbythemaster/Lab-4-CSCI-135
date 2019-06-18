#include <iostream>
using namespace std;
int main (){
    int w;
    int h;
    
    cout <<"Input width: ";
    cin >> w;
    cout <<endl <<"Input height: ";
    cin >> h;
    cout << endl<<"Shape: "<<endl;
    
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if((i + j) % 2 ==0){
                cout <<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<< endl;
    }
    return 0;
}