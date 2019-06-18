#include <iostream>
using namespace std;
int main (){
 int length;
 
 cout <<"Input side length: ";
 cin >> length;
 cout<<endl<<"Shape: "<<endl;
 
 for(int row = 0; row <= length; row++){
     for(int col = 0; col < length; col++){
         if(col < row){
             cout <<" ";
         }
         else{
             cout <<"*";
         }
     }
     cout<<endl;
 }
    return 0;
}
