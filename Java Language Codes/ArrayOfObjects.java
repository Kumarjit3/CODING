import java.util.Scanner;

class Student
{
    Scanner sc  = new Scanner(System.in);
    private int Roll;
    private String Name;
    private int Age;
    private int Marks;

    public Student()
    {
        Roll = 0;
        Name = "Empty";
        Age = 0;
        Marks = 0;
    }
    public void SetStudent()
    {
        System.out.print("\nEnter Student Full Name : ");
        Name = sc.nextLine();
        System.out.print("\nEnter Student Roll No : ");
        Roll = sc.nextInt();
        System.out.print("\nEnter Student Age : ");
        Age = sc.nextInt();
        System.out.print("\nEnter Student Total Marks : ");
        Marks = sc.nextInt();
        System.out.print("\n");
    }

    public void ShowStudent()
    {
        System.out.print("\nStudent Informations Are Given Bellow : \n\n");
        System.out.print("\nRoll  : "+Roll+"\n");
        System.out.print("\nName  : "+Name+"\n");
        System.out.print("\nAge   : "+Age+"\n");
        System.out.print("\nMarks : "+Marks+"\n");
        System.out.print("\n");
    }
}

public class ArrayOfObjects 
{
    public static void main(String[] args)
    {
        Scanner sc  = new Scanner(System.in);
        Student []srr = new Student [3];
        for(int i=0; i<3; i++)
        {
           srr[i] = new Student();
        }
        System.out.print("\nEnter 3 Student Details : \n\n");
        for(int i=0; i<3; i++)
        {
           srr[i].SetStudent();
        }
        System.out.print("\nThe 3 Student Details Are : \n\n");
        for(int i=0; i<3; i++)
        {
            srr[i].ShowStudent();
        }
        System.out.print("\n");
        System.out.print("\n");
        sc.close();
    }    
}