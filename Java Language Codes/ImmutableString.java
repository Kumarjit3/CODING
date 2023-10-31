class ImmuString 
{
    private final String s1;
    
    public ImmuString(final String s)
    {
        s1=s;
    }
    public void SetName(final String s)
    {
       //s1=s;    ------>Error In This Line Because Immutable String Csn Not Be Modified
    }
    public final String GetName()
    {
        return s1;
    }

}

public class ImmutableString
{
     public static void main(String[] args)
     {
         ImmuString obj = new ImmuString("Kumarjit");
         System.out.print(" "+obj.GetName()+" ");
     }
}


