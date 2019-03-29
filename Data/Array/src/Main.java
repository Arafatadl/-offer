public class Main {

    public static void main(String[] args) {
       Array<Integer> arr = new Array<>();
       for (int i = 0 ; i < 10 ; i++)
           arr.addLast(i);
       arr.add(1,1);
       arr.add(1,2);
       System.out.println(arr);
    }
}
