import java.util.Scanner;

class Main
{
    private int arr[];
    private int length;

public void CreateArray(int size)
{
    length=size;
    arr = new int[size];
    System.out.print("\n");
}

public void InsertArrayElements()
{
    Scanner sc = new Scanner(System.in);
    System.out.print("\nEnter "+length+" Array Elements :- \n");
    for(int i=0; i<length; i++)
    {
        System.out.print("\nArr [ "+i+" ] = ");
        arr[i] = sc.nextInt();
    }
    System.out.print("\n");
    sc.close();
}

public void DisplayArray()
{
    System.out.print("\nThe "+length+" Array Elements Are :- \n");
    for(int i=0; i<length; i++)
    {
        System.out.print(arr[i]+" ");
    }
    System.out.print("\n");
}

public void AscendingArraySorting()
{
    for(int i=0; i<length-1; i++)
    {
        for(int j=i+1; j<length; j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    System.out.print("\n");
    System.out.print("\nAfter Ascending Sort The "+length+" Array Elements Are :- \n");
}

public void DecendingArraySorting()
{
    for(int i=0; i<length-1; i++)
    {
        for(int j=i+1; j<length; j++)
        {
            if(arr[i]<arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    System.out.print("\n");
        System.out.print("\nAfter Decending Sort The "+length+" Array Elements Are :- \n");
}

public void SearchElementFromArray(int item)
{
    for(int i=0; i<length; i++)
    {
        if(arr[i]==item)
        {
            System.out.print("\nThe Item "+item+" Is Found At "+i+" No Index\n");
            break;
        }
    }
    System.out.print("\n");
}


public void DeleteElementFromArray(int index)
{
    int k=0;
    for(int i=0; i<length; i++)
    {
        if(i==index)
        {
            if(i==length-1)
            {
               arr[i]=0;
            }
            else
            {
              arr[i]=arr[i+1];
            }
            k=1;
        }
        if(k==1)
        {
            if(i==length-1)
            {
               arr[i]=0;
            }
            else
            {
              arr[i]=arr[i+1];
            }
        }
    }
    length=length-1;
    System.out.print("\n");
}

public void Insert_At_A_SpecificIndex(int index,int item)
{
    for(int i=0; i<length; i++)
    {
        if(i==index)
        {
           arr[i] = item;
        }
    }
    System.out.print("\n");
}



    /*public Main() : arr(NULL),length(0) { }
    public void CreateArray(int);
    public void InsertArrayElements();
    public void DisplayArray();
    public void AscendingArraySorting();  
    public void DecendingArraySorting();
    public void SearchElementFromArray(int);
    public void DeleteElementFromArray(int);
    public void Insert_At_A_SpecificIndex(int,int); */
}



public class Function
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        Main m1 = new Main();

        System.out.print("\nEnter The Length Of The Array :- ");
        int n = sc.nextInt();
        m1.CreateArray(n);
        m1.InsertArrayElements();
        m1.DisplayArray();
        m1.DecendingArraySorting();
        m1.DisplayArray();
        m1.AscendingArraySorting();
        m1.DisplayArray();
        System.out.print("\nEnter The Search Item :- ");
        int p = sc.nextInt();
        m1.SearchElementFromArray(p);
        System.out.print("\nEnter Index No For Update Array :- ");
        int i = sc.nextInt();
        System.out.print("\nEnter New Value For Update Array :- ");
        int e = sc.nextInt();
        m1.Insert_At_A_SpecificIndex(i,e);
        m1.DisplayArray();
        System.out.print("\nEnter Index No For Delete Array Item :- ");
        int k = sc.nextInt();
        m1.DeleteElementFromArray(k);
        m1.DisplayArray();
        
        System.out.print("\n\n");
        sc.close();
    }
}