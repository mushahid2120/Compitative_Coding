#include <iostream>
#include <vector>
using namespace std;
int findMissingNumber(vector<int> &arr){
    for(int i=0;i<(arr.size()-1)/2;i++){
            int leftDiff=arr[i+1]-arr[i];
            int rightDiff=arr[arr.size()-i-1]-arr[arr.size()-i-2];
            if(leftDiff>rightDiff)
                return arr[i]+rightDiff;
            else if(leftDiff<rightDiff)
                return arr[arr.size()-i-2]+leftDiff;
}

cout<<arr[(arr.size()/2)]-arr[(arr.size()/2)-1]<<"\n";
if(arr.size()%2==0 && arr[(arr.size()/2)]-arr[(arr.size()/2)-1]!=arr[1]-arr[0])
    return arr[((arr.size())/2)-1]+(arr[1]-arr[0]);
    
return arr[arr.size()-1]+ (arr[arr.size()-1]-arr[arr.size()-2]);
}

int main(){
    vector<int> arr={5, 10 ,15 ,20};
    cout<<findMissingNumber(arr);
    return 0;
}
