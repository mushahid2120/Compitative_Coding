#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>arr={1,2,3,4,5};
    int lastElement=arr[arr.size()-1];
        for (int i=arr.size()-1;i>=0;i--){
            arr[i+1]=arr[i];
        }
        arr[0]=lastElement;
        for(int i=0;i<arr.size();i++)
            cout<<arr[i]<<", ";
    return 0;
}