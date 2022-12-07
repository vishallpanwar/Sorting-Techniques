#include <iostream>
using namespace std;

int selectionSort(int arr[], int n){

    for(int i=0;i<n-1;i++){
        int minIndex=i;

    for(int j=i+1;j<n;j++){
        minIndex=j;
    }

    swap(arr[minIndex],arr[i]);
}
}

int main(){

    int even[5]={2,6,4,10,8};
    cout<<"Sorted array is "<<selectionSort(even,5);

}