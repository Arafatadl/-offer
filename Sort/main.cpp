#include <iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    for (int i = 0; i < n -1 ; ++i) {
        for (int j = 0; j < n-1-i ; ++j) {
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}
void selectionSort(int arr[],int n){
    for(int i=0; i < n; i ++){
        int minIndex=i;
        for(int j=i+1; j < n ; j ++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}
void insertionSort(int arr[],int n){
    for(int i = 1; i < n ; i ++){
        int temp=arr[i];
        int j;
        for(j=i; j > 0 && arr[j - 1] > temp ; j--)
            arr[j] = arr[j - 1];
        arr[j]=temp;
    }
}
void merge(int arr[],int l, int mid , int r){
    int aux [r-l+1];
    for(int i = l ; i <= r ; i ++){
        aux[i-l]=arr[i];
    }
    int i=l; int j=mid+1;
    for (int k = l; k <=r; k++){
        if(i>mid){
            arr[k]=aux[j-l];
            j++;
        }
        else if (j>r){
            arr[k]=aux[i-l];
            i++;
        }
        else if (aux[i-l]<aux[j-l]){
            arr[k]=aux[i-l];
            i++;
        }
        else {
            arr[k] = aux[j - l];
            j++;
        }
    }
}
void mergeSort(int arr[],int l,int r){
    if(l>=r)
        return;
    int mid = l + (r-l)/2;
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
    for (int i = l+1; i <=r ; ++i) {
        if(arr[i]<v){
            swap(arr[j+1],arr[i]);
            j++;
        }
    }
    swap(arr[l],arr[j]);
    return j;
}
void quikSort(int arr[],int l, int r){
    if(l>=r)
        return;
    int p=partition(arr,l,r);
    quikSort(arr,l,p-1);
    quikSort(arr,p+1,r);
}
void quikSort(int arr[],int n){
    quikSort(arr,0,n-1);
}
int partition2way(int arr[],int l,int r){
    int v =arr[l];
    int i=l+1;
    int j=r;
    while(true){
        while(i<=r && arr[i]<v) i++;
        while(j>=l+1 && arr[j]>v) j--;
        if(i>j)
            break;
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    swap(arr[l],arr[j]);
    return j;
}
void quikSort2way(int arr[],int l,int r){
    if(l>=r)
        return;
    int p=partition2way(arr,l,r);
    quikSort2way(arr,l,p-1);
    quikSort2way(arr,p+1,r);
}
void quikSort2way(int arr[],int n){
    quikSort2way(arr,0,n-1);
}
void quikSort3way(int arr[],int l,int r){
    if(l>=r)
        return;
    int v=arr[l];
    int lt=l;
    int gt=r+1;
    int i=l+1;
    while(i<gt){
        if(arr[i]<v){
            swap(arr[i],arr[lt+1]);
            lt++;
            i++;
        }
        else if(arr[i]>v){
            swap(arr[i],arr[gt-1]);
            gt--;
        } else
            i++;
    }
    swap(arr[l],arr[lt]);
    quikSort3way(arr,l,lt-1);
    quikSort3way(arr,gt,r);
}
void quikSort3way(int arr[],int n){
    quikSort3way(arr,0,n-1);
}


int main(){
    int arr[]={2,5,3,1,6,7,8,9,4};
    //insertionSort(arr,9);
    //selectionSort(arr,9);
    //mergeSort(arr,9);
    //quikSort(arr,9);
    //quikSort2way(arr,9);
    //quikSort3way(arr,9);
    //bubbleSort(arr,9);
    for( int i = 0 ; i < 9 ; i ++ )
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
