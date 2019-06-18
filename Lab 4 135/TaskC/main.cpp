#include <iostream>
using namespace std;
int main (){
  int size;
  
  cout<<"Input size: ";
  cin >> size;
  
  size = size + 1;
  cout<<endl<<"Shape: "<<endl;
  
  for(int row = 1; row < size; row++){
      for(int col = 0; col < size; col++){
          if(row==col){
              cout<<"*";
          }
          else if(col ==(size - row)){
              cout <<"*";
          }
          else if(row!=col){
              cout<<" ";
          }
      }
      cout <<endl;
  }
    return 0;
}