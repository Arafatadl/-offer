#include <iostream>
#include <algorithm>
#include <vector>
#include<iostream>

using namespace std;

void selectionSort(int arr[],int n){
    for(int i=0; i<n; i++){
        int minIndex = i;
        for (int j = i+1; j <n ; ++j) {
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}

void bubbleSort(int arr[],int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}

void insertionSort(int arr[],int n){
    for(int i=1; i<n; i++){
        int temp=arr[i];
        int j;
        for(j=i;j>0 && arr[j-1]>temp;j--){
            arr[j]=arr[j-1];
        }
        arr[j]=temp;
    }
}

void merge(int arr[],int l,int mid,int r){
    int aux[r-l+1];
    for(int i=l; i<=r; i++)
        aux[i-l]=arr[i];

    int i=l,j=mid+1;
    for (int k = l; k <=r ; ++k) {
        if(i>mid){
            arr[k]=aux[j-l];
            j++;
        }
        else if(j>r){
            arr[k]=aux[i-l];
            i++;
        }
        else if(aux[i-l]<aux[j-l]){
            arr[k]=aux[i-l];
            i++;
        } else {
            arr[k] = aux[j - l];
            j++;
        }
    }
}
void mergeSort(int arr[],int l,int r){
    if(l>=r)
        return;
    int mid=(r+l)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);
}
void mergeSort(int arr[],int n){
    mergeSort(arr,0,n-1);
}

int partition(int arr[],int l,int r){
    int v=arr[l];
    int j=l;
    for(int i=l+1; i<=r; i++){
        if(arr[i]<v){
            swap(arr[i],arr[j+1]);
            j++;
        }
    }
    swap(arr[l],arr[j]);
    return j;
}
void quikSort(int arr[],int l,int r){
    if(l>=r)
        return;
    int p=partition(arr,l,r);
    quikSort(arr,l,p-1);
    quikSort(arr,p+1,r);
}
void quikSort(int arr[],int n){
    quikSort(arr,0,n-1);
}

int partitionTwo(int arr[],int l,int r){
     int v=arr[l];
     int i=l+1,j=r;
     while(true){
         while(i<=r &&arr[i]<v)i++;
         while(j>=l+1 &&arr[j]>v)j--;
         if(i>j)break;
         swap(arr[i],arr[j]);
         i++;j--;
     }
     swap(arr[l],arr[j]);
     return j;
}
void quikSortTwo(int arr[],int l,int r){
    if(l>=r)
        return;
    int p=partitionTwo(arr,l,r);
    quikSortTwo(arr,l,p-1);
    quikSortTwo(arr,p+1,r);
}
void quikSortTwo(int arr[],int n){
    quikSortTwo(arr,0,n-1);
}

void quikSortTree(int arr[],int l,int r){
     if(l>=r)
         return;
     int v=arr[l];
     int lt=l,gt=r+1,i=l+1;
     while(i<gt){
         if(arr[i]<v){
             swap(arr[i],arr[lt+1]);
             i++;
             lt++;
         }
         else if(arr[i]>v){
             swap(arr[i],arr[gt-1]);
             gt--;
         } else
             i++;
     }
     swap(arr[l],arr[lt]);
     quikSortTree(arr,l,lt-1);
     quikSortTree(arr,gt,r);
}
void quikSortTree(int arr[],int n){
    quikSortTree(arr,0,n-1);
}

int main(){
    int arr[] = {3,1,2,5,4,6,9,7,8};
    //bubbleSort(arr,9);
    //selectionSort(arr,9);
    //insertionSort(arr,9);
    //mergeSort(arr,9);
    //quikSort(arr,9);
    //quikSortTwo(arr,9);
    quikSortTree(arr,9);
    for (int i = 0; i < 9; ++i) {
        cout<<arr[i]<<' ';
    }
    return 0;
}
