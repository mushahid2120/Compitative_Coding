#include <iostream>
#include <vector>
#include<chrono>
using namespace std;

int main(){
    auto start = chrono::high_resolution_clock::now();
    vector <vector<int>> arr = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target=16;
    for(int i=0;i<arr.size();i++){
        if(target>=arr[i][0] && target<=arr[i][arr[i].size()-1]){
            for(int j=0;j<arr[i].size();j++){
                if(arr[i][j]==target){
                    cout<<"true";
                    break;
                }       
            }
        }
    }
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> duration_s = end - start;
    cout << "Execution time: " << duration_s.count() << " seconds" << endl;
    return 0;
}