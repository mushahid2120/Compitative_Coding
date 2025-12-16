#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
    vector<int>arr={1,2,2,4,5,5,10,10},arr2;
    for(int i=0;i<arr.size();i++){
        arr2.push_back(arr[i]);
        int k=i;
        while(i<arr.size()){
            if(arr[i]==arr[k])
                i++;
            else {
                i--;
                break;
            }
        }
    }
    for(auto x:arr2)
        cout<<x<<' ';
    return 0;
}