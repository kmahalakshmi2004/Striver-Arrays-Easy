#include<bits/stdc++.h>
using namespace std;

int missingelement(int arr[],int n){
     //outer for loop
     for(int i=0;i<n;i++){
          int flag=0;//there is no element
          //inner for loop
          for(int j=0;j<n-1;j++){
               if(arr[j]==i)
               flag=1;  //element found
               break;
          }
          if(flag==0){
               return i;
          }
     }
     return -1;

}

int main(){
    int n = 5;
    int arr[] = {1, 3, 4, 5};
    int ans = missingelement(arr, n);
    cout << "The missing number is: " << ans << endl;
    return 0;
}