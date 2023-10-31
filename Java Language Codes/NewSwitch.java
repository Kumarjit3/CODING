import java.util.Scanner;

class NewSwitch
{
    public static void main(String a[])
    {
        Scanner sc = new Scanner(System.in);
        while(true)
        {
        System.out.print("Enter A Day :- ");
        String day=sc.nextLine();
        day=day.toLowerCase();
         switch(day)
         {
            case "monday":
             
                 System.out.println("First Day Of Week,Let's Go");
                 break;
        
            case "tuesday":
                 System.out.println("Second Day Of Week,Let's Start");
                 break;
        
            case "wednesday":
                 System.out.println("Third Day Of Week,Let's Work Heard");
                 break;
        
            case "thursday":
                 System.out.println("Fourth Day Of Week,Let's Regain Some Speed");
                 break;
        
            case "friday":
                 System.out.println("Fifth Day Of Week,Let's Hurry");
                 break;
         
            case "saturday":
                 System.out.println("Sixth Day Of Week,Let's Finished It");
                 break;
        
            case "sunday": 
                 System.out.println("Last Day Of Week,Let's Enjoy");
                 break;
        
            default:
                 System.out.println("Default Day");
                 break;
          }
          sc.close();
        }
    }
}