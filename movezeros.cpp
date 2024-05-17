#include<bits/stdc++.h>
using namespace std;

//BRUTE FORCE
//arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1} 
//storing the non zero elements in the temp variable 
//getting size of the non zero element to append the zeros after that

vector<int> moveZeros(int n, vector<int> a) {
     //Temporary array
     vector<int> temp;
     //copying the non zero elements from original->temp array
     for(int i=0;i<n;i++){
          if(a[i]!=0){
               temp.push_back(a[i]); //here all the nz values are being added to the temp variable 
          }
     }
     //size of the temporary array 
     //no of non zero elements
     int nz =temp.size();

     //copy elements from temp
     //fill first nz values
     //original array
     for(int i=0;i<n;i++){
          //temp[i] = {1, 2, 3, 2, 4, 5, 1}
          a[i]=temp[i];
     }

     //adding the zero values to the array
     for(int i=nz;i<n;i++){
          a[i]=0;
     }
     return a;



}

int main()
{
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = 10;
    vector<int> ans = moveZeros(n, arr);
    for (auto &it : ans) {
        cout << it << " ";
    }
    cout << '\n';
    return 0;
}