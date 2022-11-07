public class ArraySum{
  public static void main(String args[]){
    int arr[]=new int[5];
    arr[0]=5;
    arr[1]=2;
    arr[2]=6;
    arr[3]=10;
    arr[4]=4;

    int sum=0;
    for(int i=0;i<arr.length;i++){
      sum+=arr[i];
    }

    System.out.println(sum);
  }
}