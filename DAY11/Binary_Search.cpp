#include<iostream>
using namespace std;

int Binary_Sesrch (int num[], int n, int target){
    int left =0;
    int right=  n-1;
    while(left < = right){
        int mid = left +(right -left)/2;
        if(nums[mid]==target)
        return mid;
        else if(nums[mid]<target)
        left =mid + 1;
        else right =    mid -1;
    }
}