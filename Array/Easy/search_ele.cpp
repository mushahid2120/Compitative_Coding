// Search an Element in an array

#include <iostream>
#include <array>
using namespace std;
int main(){
    array <int,4>arr = {1, 2, 3, 4};
    int x=3;
    for(int i=0;arr.size();i++){
        if(arr[i]==x){
            cout<<i;
            break;
        }
    }
    return 0;
}