#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Time complaxity required O(n) but actually it is  O(n^2) 
int  main(){
    vector<int> arr={16, 17, 4, 3, 5, 2};
    for(int i=0;i<arr.size()-1;i++){
            arr[i]=*(max_element(arr.begin()+i+1,arr.end())) ;          
        }
    arr[arr.size()-1]=-1;
    for(int x: arr)
        cout<<x<<" ";
    return 0;
}