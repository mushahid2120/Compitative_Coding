#include <iostream>
#include <vector>
#include<chrono>
using namespace std;

int main(){
    auto start = chrono::high_resolution_clock::now();
    vector<int> neg,arr={-5, 7, -3, -4, 9, 10, -1, 11};
    // arr.erase(arr.begin()+1,arr.begin()+2);
    //Time complaxity of this code is O(N^2)
       for(int i=0;i<arr.size();i++){ //O(n)
        if(arr[i]<0){
             neg.push_back(arr[i]);
             arr.erase(arr.begin()+i,arr.begin()+i+1); //O(n)
             --i;
        }
       }
       arr.insert(arr.end(),neg.begin(),neg.end());

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> duration_s = end - start;
    cout << "Execution time: " << duration_s.count() << " seconds" << endl;
    for(int x: arr)
        cout<<x<<" ";
    return 0;
}