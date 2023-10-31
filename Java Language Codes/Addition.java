//package com.company;
import java.util.Scanner;

class Addition
{
    public static void main(String a[])
    {
        Scanner sc = new Scanner(System.in);
        /*System.out.print("\nEnter The First Number : ");
        int A = sc.nextInt();
        System.out.print("\nEnter The Second Number : ");
        int B = sc.nextInt();
        System.out.print("\nEnter Your First Name : ");
        String Name = sc.next();
        System.out.print("\nEnter Your Last Name : ");
        String Name1 = sc.next();
        System.out.print("\nEnter The Third Number : ");
        int C = sc.nextInt();
        System.out.print("\nEnter Your Nick Name : ");
        String Name2 = sc.next();
        int D = A + B + C;
        System.out.print("\nThe Sum iS : "+D);
        System.out.print("\nYour First Name Is : "+Name);
        System.out.print("\nYour last Name Is : "+Name1);
        System.out.print("\nYour Nick Name Is : "+Name2+"\n\n\n");*/

        System.out.print("\nEnter The Name : ");
        String Name = sc.nextLine();
        System.out.print("\nEnter The Gender : ");
        char Gender = sc.next().charAt(0);
        System.out.print("\nEnter The Age : ");
        int Age = sc.nextInt();
        sc.nextLine();
        System.out.print("\nEnter Fathers Name : ");
        String FatherName = sc.nextLine();
        System.out.print("\nEnter Mothers Name : ");
        String MotherName = sc.nextLine();
        System.out.print("\nName : "+Name);
        System.out.print("\nGender : "+Gender);
        System.out.print("\nAge : "+Age);
        System.out.print("\nFothers Name : "+FatherName);
        System.out.print("\nMothers Name : "+MotherName+"\n\n\n");    
        sc.close();
    }
}