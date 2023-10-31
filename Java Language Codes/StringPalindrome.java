import java.util.Scanner;

public class StringPalindrome
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        String one;
        System.out.print("\nEnter A String :- ");
        one = sc.nextLine();
        boolean signal = IsPalindrome(one);
        if(signal==true)
        {
           System.out.print("\nThe String Is A Palindrome String\n");
        }
        else
        {
           System.out.print("\nThe String Is Not A Palindrome String\n");
        }
        System.out.print("\n");
        sc.close();
    }

    public static boolean IsPalindrome(String arr)
    {
       int n=arr.length();
       int m=n-1,flag=0;
       for(int i=0; i<n; i++)
       {
        if(arr.charAt(i) != arr.charAt(m))
        {
            flag=1;
            break;
        }
        m--;
       }
       if(flag==0)
       return true;
       else
       return false;
    }
}