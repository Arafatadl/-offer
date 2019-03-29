public class InsertionSort {

    void InsertionSort(int arr[]){
        int size = arr.length;
        for (int i = 0 ; i < size ; i ++ ){

            for (int j = i ; j > 0 && arr[j] < arr[j-1]; j --)
                swap(arr,j,j-1);
        }

        for (int k = 0; k < size ; k ++ )
            System.out.println(arr[k]);
    }

    private void swap(int arr[], int a, int b) {
        int t = arr[a];
        arr[a] = arr[b];
        arr[b] = t;
    }


    public void InsertionSort2 ( int arr[]){
        int n = arr.length;
        for (int i = 1 ; i < n ; i ++ ){

            int temp = arr[i];
            int j;

            for ( j = i; j > 0 && arr[j-1] > temp ; j--)
                arr[j]=arr[j-1];
            arr[j]=temp;
        }

        for (int k = 0; k < n ; k ++ )
            System.out.println(arr[k]);
    }


    public static void main (String[]args){

        int arr[] = {10, 5, 4, 3, 2, 8, 6};
        InsertionSort sort = new InsertionSort();
        sort.InsertionSort2(arr);
    }
}
