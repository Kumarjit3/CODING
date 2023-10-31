#include<iostream>
#include<time.h>
using namespace std;

class matrix
{
      private:
        char m[50][50]={};
        int row,column;
        int pr,pc; //for pont
        int mr,mc; //for movement
        int score;
        int khana;
      public:
       matrix() : row(25),column(25),pr(15),pc(17),mr(12),mc(12),score(0),khana(1) {}
       void AccessMatrix(char mm)
       {
        int i,j;
        for(i=0; i<row; i++)
        {
            for(j=0; j<column; j++)
            {
                if(i==pr && j==pc)
                {
                    m[i][j]=((char)khana,sizeof(int));  //Not Done properly
                }
                else if(i==mr && j==mc)
                {
                   m[i][j]=mm;
                }
                else
                {
                 m[i][j]=' ';
                }
            }
        }
       }
      void setPoint()
      {
         srand(time(0));
         this->pr=rand()%25;
         this->pc=rand()%25;
      }
      void setMovement(int r,int c)
      {
         this->mr=r;
         this->mc=c;
      } 
       void setMatrix(int row,int column)
       {
        this->row=row;
        this->column=column;
       }
       void showMatrix()
       {
         size_t i,j;
         system("cls");
         frame();
         cout<<"\t\t\t\t\t\t\t------------------\n";
         cout<<"\t\t\t\t\t\t\t| SCORE --->  "<<score<<" |\n";
         cout<<"\t\t\t\t\t\t\t------------------\n";
        cout<<"\t\t\t\t\t\t\t------------------------------------------------------------------------------"<<endl;
        for(i=0; i<row; i++)
        {
        cout<<"\t\t\t\t\t\t\t|";
        for(j=0; j<column; j++)
        {
            cout<<" "<<m[i][j]<<" ";
        }
        cout<<" |";
        cout<<endl;
        }
        cout<<"\t\t\t\t\t\t\t------------------------------------------------------------------------------"<<endl;
        }
        int menu()
        {
            int k;
            cout<<"\t\t\t\t\t\t\tPress 1 for UP shift____________________ "<<endl;
            cout<<"\t\t\t\t\t\t\tPress 2 for DOWN shift______________________ "<<endl;
            cout<<"\t\t\t\t\t\t\tPress 3 for LEFT shift_________________________ "<<endl;
            cout<<"\t\t\t\t\t\t\tPress 4 for RIGHT shift____________________________ "<<endl;
            cout<<"\t\t\t\t\t\t\tPress In Between[1/2/3/4] : "; cin>>k;
            return k;
        }
      void movement()
      {
        int m=menu(); 
        if(m==1)  //UP Shift
        {
            if(mr==0) { system("cls"); cout<<endl<<"\n\n\n\t\t\t\t\t\t\t\t________Exit From The Game Due To Bound Cross________\n\n\n\n\n"<<endl; exit(0); }
            setMovement(mr-1,mc);
            AccessMatrix('=');
            if(check()) { score+=khana; setPoint();  AccessMatrix('='); }
        }
        if(m==2)  //Down Shift
        {
            if(mr+1==row) { system("cls"); cout<<endl<<"\n\n\n\t\t\t\t\t\t\t\t________Exit From The Game Due To Bound Cross________\n\n\n\n\n"<<endl; exit(0); }
            setMovement(mr+1,mc);
            AccessMatrix('=');
            if(check()) { score+=khana; setPoint();  AccessMatrix('='); }
        }
        if(m==3)   //Left Shift
        {
            if(mc==0) { system("cls"); cout<<endl<<"\n\n\n\t\t\t\t\t\t\t\t________Exit From The Game Due To Bound Cross________\n\n\n\n\n"<<endl; exit(0); }
            setMovement(mr,mc-1);
            AccessMatrix('=');
            if(check()) { score+=khana; setPoint();  AccessMatrix('='); }
        }
        if(m==4)   //Right Shift
        {
            if(mc+1==column) { system("cls"); cout<<endl<<"\n\n\n\t\t\t\t\t\t\t\t________Exit From The Game Due To Bound Cross________\n\n\n\n\n"<<endl; exit(0); }
            setMovement(mr,mc+1);
            AccessMatrix('=');
            if(check()) { score+=khana; setPoint();  AccessMatrix('='); }
        }
        if(m!=1&&m!=2&&m!=3&&m!=4)
        {
            system("cls");
            cout<<endl<<"\n\n\n\t\t\t\t\t\t\t\t\t________Exit Due To Wrong Press________\n\n\n\n\n"<<endl;
            exit(0);
        }
      }
      int check()
      {
        if(pr==mr && pc==mc)
        {
         AccessMatrix('=');
         return 1;
        }
        else
        return 0;
      }
      void frame()
      {
        printf("\t\t\t:=:=:=:=:=:=:=:=:==:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:==:=:=:=:=:=:==:=:=:=:=:==:=:=:=:==:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:==:=:=:=:=:=:\n");
        printf("\t\t\t:=:=:=:=:=:=:=:=:==:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:==:=:=:=:=:=:==:=:=:=:=:==:=:=:=:==:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:==:=:=:=:=:=:\n");
        printf("\n\t\t\t\t\t\t\t\t\t\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4");
        printf("\n\t\t\t\t\t\t\t\t\t\t  || CATCH THE STAR ||\n");
        printf("\t\t\t\t\t\t\t\t\t    || CREATED BY KUMARJIT MONGAL ||\n");
        printf("\t\t\t\t\t\t\t\t\t\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4\n");
        printf("\n\t\t\t:=:=:=:=:=:=:=:=:==:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:==:=:=:=:=:=:==:=:=:=:=:==:=:=:=:==:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:==:=:=:=:=:=:\n");
        printf("\t\t\t:=:=:=:=:=:=:=:=:==:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:==:=:=:=:=:=:==:=:=:=:=:==:=:=:=:==:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:==:=:=:=:=:=:\n");
  
      }
};


int main()
{
    matrix m1;
    m1.AccessMatrix('=');
    m1.showMatrix();
    while(1)
    {    
    m1.setMatrix(25,25);
    m1.movement();
    m1.showMatrix();
    }
    cout<<endl;
    return 0;
}

