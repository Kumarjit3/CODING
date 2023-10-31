import java.lang.String;

public class StringBuffer1 
{
     public static void main(String[] args)
     {
        StringBuffer sb = new StringBuffer("Kumar");
        sb.append(" Mongal");
        sb.insert(6,"Java ");
        sb.setLength(30);
        System.out.print("\n"+sb+"\n");
     }
}
