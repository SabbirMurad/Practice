public class Series{
  public static void main(String args[]){
    int n=Integer.parseInt(args[0]);
    int sum =(n*(n+1)*(2*n+1))/6;
    System.out.println(sum);
  }
}