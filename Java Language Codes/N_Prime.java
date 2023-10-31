import java.util.Scanner;

public class N_Prime
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("\n");
        System.out.print("\nEnter The Value Of N :- ");
        int n = sc.nextInt();
        int count=0;
        for(int i=1; i<=n; i++)
        {
            int p=i;
            for(int j=1; j<=p; j++)
            {
                if(p%j==0)
                {
                    count++;
                }
            }
            if(count==2)
            {
                System.out.print("\nNumber "+p+" Is Prime\n");
            }
            else
            {
                System.out.print("\nNumber "+p+" Is Not Prime\n");
            }
            count=0;
        }

        System.out.print("\n");
        sc.close();
    }
}