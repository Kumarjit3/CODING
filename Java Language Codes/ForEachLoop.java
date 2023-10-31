import java.util.Scanner;

public class ForEachLoop
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        System.out.print("\nEnter The Length Of The Array : ");
        int num = input.nextInt();
        int []arr = new int[num];
        System.out.print("\nEnter The "+num+" Array Elements : \n\n");
        for(int i=0; i<num; i++)
        {
            arr[i] = input.nextInt();
        }
        TableOf(arr,num);
        System.out.print("\n");
        input.close();
    }
    
    public static void TableOf(int[] arr,int N)
    {
        int sum=0;
        System.out.print("\nThe Sum Of "+N+" Array Elements Is : \n");
        for(int n : arr)
        {
           sum+=n;
        }
        System.out.print("\n"+sum+" \n\n");
    }
}