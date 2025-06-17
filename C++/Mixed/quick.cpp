#include<bits/stdc++.h>
using namespace std;
/* Logic for pivot
 2 pointers i and j
 i will be placed at first position and that will also be our pivot position
 then we will keep incrementing i(using while loop) until we find an element which is greater than the pivot element which in the forst iteration will be our first element.
 when we exit that while loop we will enter into another while loop that will keep decrementing the j pointer until it finds an element smaller than pivot
 then we will swap the i and j elements in the array and this will keep happening until i and j cross each other i.e until i<j
 when i and j cross each other than we will swap the element on the ith index and the element on the pivot index, letting us fix the pivot on its correct sorted position in the array

 we will repeat this using recurssion until we sort the array
 base condition for recurssion will be when there is more than 1 element in the array.i.e low<high.

 low
      j i      
 [4,2,3,6,10]

 [3,2,4,6,10]

*/
int pivot(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j]= temp;
        }
        //swapped the elements
    }
    //swapping when i has crossed j
    int temp = arr[j];
    arr[j] = arr[low];
    arr[low] = temp;

    return j;
}
void  quickSort(int arr[], int low, int high){
    if(low<high){
        int partition = pivot(arr,low,high);
        quickSort(arr,low,partition-1);
        quickSort(arr,partition+1,high);
    }
}

int main(){
    int arr[5] = {3,2,4,6,9};
    quickSort(arr,0,4);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}