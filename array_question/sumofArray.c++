#include <bits/stdc++.h>
using namespace std;

int sum(int *arr, int size){
    if(size == 0){
        return -1;
    }
    if(size == 1){
        return arr[0];
    }
   return arr[0] + sum(arr + 1, size-1);

}

int main()
{
    int arr[4] = {1,2,3,4};
    int size = 4;
    cout << sum(arr, size);

}