public class SelectionSort {

    public void SelectionSort(int arr[]) {
        int n= arr.length;
        for (int i = 0; i < n; i++) {
            int minIndex = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }
            swap(arr, i, minIndex);
        }

        for (int k = 0; k < n ; k ++ )
            System.out.println(arr[k]);
    }

    private void swap(int arr[], int a, int b) {
        int t = arr[a];
        arr[a] = arr[b];
        arr[b] = t;
    }


    public static void main (String[]args){

            int arr[] = {10, 5, 4, 3, 2, 8, 6};
            SelectionSort sort = new SelectionSort();
            sort.Sort2(arr                                              ` `);
        }


    private void Sort2(int arr[]){
        int n=arr.length;
        for (int i = 0; i < n; i ++) {

            int min = i;
            for (int j = i + 1; j < n ; j ++){
                if (arr[j]<arr[min])
                    min=j;

            }
            swap(arr,i,min);
        }
        for (int k = 0; k < n ; k ++ )
            System.out.println(arr[k]);
    }
}
