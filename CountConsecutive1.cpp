#include<bits/stdc++.h>
using namespace std;

int getelements(int arr[], int n){
     //assigning with count and maxCount=0 and checking each time while iterating
     /*the count will update together with the max count but when it reaches 0 
     when the condition fails the count will again start with 1*/
     int count = 0;
     int maxCount = 0;
     for(int i = 0; i < n; i++){
          if(arr[i] == 1){
               count++;
          }
          else{
               count = 0;
          }
          //checking whether the count or maxCount is greater
          if (count > maxCount) {
              maxCount = count;
          }
     }
     //NOTE: returning out of the loop
     return maxCount;
}

int main(){
     int arr[] = {1, 1, 1, 0, 0, 1, 1};
     int n = 7;
     //Seperate variable to store the return value of a function
     int result = getelements(arr, n);
     cout << result << endl;
     return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// // Function to find the maximum number of consecutive ones in a binary array
// int getones(int arr[], int n){
//      int count = 0;
//      int maxx = 0;
//      for(int i = 0; i < n; i++){
//           if(arr[i] == 1){
//                count++;
//           }
//           else{
//                count = 0;
//           }

//           maxx = max(maxx, count);
//      }
//      return maxx;
// }

// int main(){
//      int arr[] = {1, 1, 1, 0, 0, 1, 1};
//      int n = 7;
//      int result = getones(arr, n);
//      cout << result << endl;
//      return 0;
// }