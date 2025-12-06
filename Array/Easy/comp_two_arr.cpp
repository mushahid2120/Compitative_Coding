#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector <int>arr={1, 2, 5, 4, 0};
    vector <int>arr1={2, 4, 5, 0, 1};
    if(arr.size()!=arr1.size()) cout<<"not equal";
    sort(arr.begin(),arr.end());
    sort(arr1.begin(),arr1.end());
    // vector<int> newarr1=sort(arr1.begin(),arr1.end());
    for(int i=0;i<arr.size();i++)
        if(arr[i]!=arr[i]){
            cout<<"not equal";
            break;
        }
    
    return 0;
}