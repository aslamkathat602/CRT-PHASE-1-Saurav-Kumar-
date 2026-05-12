#include<iostream>
using namespace std;

void Swap_array(int &a,int &b){
     int temp =a;
    a=b;
    b= temp;

}
void Bubble_sort(int num[],int n)
{
    for(int i=0; i < n; i++)
    {
        bool flag = false;
        for (int j =0; j<n -i -1;j++)
        {
            if(num[i]>num[j+1]){
                cout << " Array is sorted :" <<endl;
                Swap_array(num[j],num[j+1]);
                flag =true;
            }
        }
        if (!flag){
            cout << "array is already sorted :" << endl;
            break;

        }
    }
}
int main(){
    int arr[5] = {1, 2, 3, 5, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    Bubble_sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}