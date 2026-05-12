#include<iostream>
using namespace std;


int Linear_Search( int num[],int n, int target){
    for(int i=0;i<n;i++){
        if(num[i]==target){
            return i;
        }
    }
    return -1;
};
int main(){
    int arr[5] ={1,2,3,4,5};
    int size =sizeof(arr)/ sizeof(arr[0]);

    int ans =Linear_Search(arr, size,3);
    cout << "Element found at index : " << ans << endl;

    return 0;
}