// #include<bits/stdc++.h>
// using namespace std;

// int oncecome(int arr[],int num){
//      for(int i=0;i<num;i++){  
//           hash[arr[i]]; //initailizing a hash array
//      }
//      for(int j=0;j<num;j++){
//           if(arr[i]!=arr[j])
//           hash[arr[i]]++;
//      }
//      for (int i = 0; i < n; i++) {
//         if (hash[arr[i]] == 1)
//           return arr[i];
//     }
     
// }


// int main(){
//      int arr[]={4,1,2,1,2};
//      int num=5;
//      int ans=oncecome(arr,num);
//      cout << "The single element is: " << ans << endl;
// }


#include<bits/stdc++.h>
using namespace std;

int oncecome(int arr[], int num){
    unordered_map<int, int> hash;
    for(int i=0; i<num; i++){
        hash[arr[i]]++;
    }
    for(int j=0; j<num; j++){
        if(hash[arr[j]] == 1)
            return arr[j];
    }
}

int main(){
    int arr[]={4,1,2,1,2};
    int num=5;
    int ans=oncecome(arr, num);
    cout << "The single element is: " << ans << endl;
}
