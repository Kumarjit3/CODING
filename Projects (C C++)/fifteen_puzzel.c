void input(int arr[][3],int);
void output(int arr[][3],int);
void swap(int arr[][3],int,int,int);
void left_1(int arr[][3],int,int,int);
void right_1(int arr[][3],int,int,int);
void up_1(int arr[][3],int,int,int);
void down_1(int arr[][3],int,int,int);
void check_win(int arr[][3],int);
void Font();
char name[30];
int moveMent=0;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
void input(int arr[][3],int n)
{
          arr[0][0]=3,arr[0][1]=5,arr[0][2]=2,arr[1][0]=4;
          arr[1][1]=0,arr[1][2]=1,arr[2][0]=7,arr[2][1]=6;
          arr[2][2]=8;
}

void output(int arr[][3],int n)
{
    int i,j,p;
    system("cls");
    Font();
    printf("\n\n");
    for(i=0; i<n; i++)
    {
         printf("\t\t\t\t\t\t\t\t\t\t   -------------\n");
        printf("\t\t\t\t\t\t\t\t\t\t   | %d | %d | %d |\n",arr[i][0],arr[i][1],arr[i][2]);
    }
    
         printf("\t\t\t\t\t\t\t\t\t\t   -------------\n");

         printf("\n\t\t\t\t\t\t\t\t\t\t | Movement :- %d |\n",moveMent);
         check_win(arr,3);
}

void swap(int arr[][3],int p,int s,int l)
{
   moveMent++;
   int k;
   printf("\n\n");
   if(s==0 && l==0) { printf("\n\n\t\t\t\t\t\t\tpress 1 for LEFT SHIFT\n\t\t\t\t\t\t\tpress 3 for UP SHIFT---------\n"); }
   if(s==0 && l==1) { printf("\n\n\t\t\t\t\t\t\tpress 1 for LEFT SHIFT\n\t\t\t\t\t\t\tpress 2 for RIGHT SHIFT\n\t\t\t\t\t\t\tpress 3 for UP SHIFT---------\n"); }
   if(s==0 && l==2) { printf("\n\n\t\t\t\t\t\t\tpress 2 for RIGHT SHIFT\n\t\t\t\t\t\t\tpress 3 for UP SHIFT---------\n"); }
   if(s==1 && l==0) { printf("\n\n\t\t\t\t\t\t\tpress 1 for LEFT SHIFT\n\t\t\t\t\t\t\tpress 3 for UP SHIFT\n\t\t\t\t\t\t\tpress 4 for DOWN SHIFT---------\n"); }
   if(s==1 && l==1) { printf("\n\n\t\t\t\t\t\t\tpress 1 for LEFT SHIFT\n\t\t\t\t\t\t\tpress 2 for RIGHT SHIFT\n\t\t\t\t\t\t\tpress 3 for UP SHIFT\n\t\t\t\t\t\t\tpress 4 for DOWN SHIFT---------\n"); }
   if(s==1 && l==2) { printf("\n\n\t\t\t\t\t\t\tpress 2 for RIGHT SHIFT\n\t\t\t\t\t\t\tpress 3 for UP SHIFT\n\t\t\t\t\t\t\tpress 4 for down SHIFT---------"); }
   if(s==2 && l==0) { printf("\n\n\t\t\t\t\t\t\tpress 1 for LEFT SHIFT\n\t\t\t\t\t\t\tpress 4 for DOWN SHIFT---------\n"); }
   if(s==2 && l==1) { printf("\n\n\t\t\t\t\t\t\tpress 1 for LEFT SHIFT\n\t\t\t\t\t\t\tpress 2 for RIGHT SHIFT\n\t\t\t\t\t\t\tpress 4 for DOWN SHIFT---------\n"); }
   if(s==2 && l==2) { printf("\n\n\t\t\t\t\t\t\tpress 2 for RIGHT SHIFT\n\t\t\t\t\t\t\tpress 4 for DOWN SHIFT---------\n"); }

   if(s==0&&l==0) { printf("\n\t\t\t\t\t\t\t"); puts(name); printf("\t\t\t\t\t\t\tChose any one option between [1/3]:- ");  scanf("%d",&k);}
   if(s==0&&l==1) { printf("\n\t\t\t\t\t\t\t"); puts(name); printf("\t\t\t\t\t\t\tChose any one option between [1/2/3]:- ");  scanf("%d",&k);}
   if(s==0&&l==2) { printf("\n\t\t\t\t\t\t\t"); puts(name); printf("\t\t\t\t\t\t\tChose any one option between [2/3]:- ");  scanf("%d",&k);}
   if(s==1&&l==0) { printf("\n\t\t\t\t\t\t\t"); puts(name); printf("\t\t\t\t\t\t\tChose any one option between [1/3/4]:- ");  scanf("%d",&k);}
   if(s==1&&l==1) { printf("\n\t\t\t\t\t\t\t"); puts(name); printf("\t\t\t\t\t\t\tChose any one option between [1/2/3/4]:- "); scanf("%d",&k); }
   if(s==1&&l==2) { printf("\n\t\t\t\t\t\t\t"); puts(name); printf("\t\t\t\t\t\t\tChose any one option between [2/3/4]:- "); scanf("%d",&k); }
   if(s==2&&l==0) { printf("\n\t\t\t\t\t\t\t"); puts(name); printf("\t\t\t\t\t\t\tChose any one option between [1/4]:- ");  scanf("%d",&k);}
   if(s==2&&l==1) { printf("\n\t\t\t\t\t\t\t"); puts(name); printf("\t\t\t\t\t\t\tChose any one option between [1/2/4]:- ");  scanf("%d",&k);}
   if(s==2&&l==2) { printf("\n\t\t\t\t\t\t\t"); puts(name); printf("\t\t\t\t\t\t\tChose any one option between [2/4]:- ");  scanf("%d",&k);}

   if(k==1) { left_1(arr,3,s,l); s=s,l=l+1;  swap(arr,3,s,l); }
   if(k==2) { right_1(arr,3,s,l); s=s,l=l-1; swap(arr,3,s,l); }
   if(k==3) { up_1(arr,3,s,l); s=s+1,l=l;    swap(arr,3,s,l); }
   if(k==4) { down_1(arr,3,s,l); s=s-1,l=l;  swap(arr,3,s,l); }
}

void left_1(int arr[][3],int p,int s,int l)
{
     arr[s][l]=arr[s][l+1];
     arr[s][l+1]=0;
     output(arr,3);
}

void right_1(int arr[][3],int p,int s,int l)
{
     arr[s][l]=arr[s][l-1];
     arr[s][l-1]=0;
     output(arr,3);
}

void up_1(int arr[][3],int p,int s,int l)
{
     arr[s][l]=arr[s+1][l];
     arr[s+1][l]=0;
     output(arr,3);
}

void down_1(int arr[][3],int p,int s,int l)
{
     arr[s][l]=arr[s-1][l];
     arr[s-1][l]=0;
     output(arr,3);
}


void check_win(int arr[][3],int n)
{
   int i,j,k=1,p=0;
     for(i=0; i<n; i++)
     {
       for(j=0; j<n; j++)
       {
         if(arr[i][j]==k++) { p++; } else { break; }
       }
       if(p==8) { puts(name); printf("\nCONGRATULATION YOU ARE ABLE TO SOLVE THE PUZZLE AND YOU WIN THE GAME VERY WELL DONE---------------- \n\n"); exit(0); }
     }
}

void Font()
{
     system("cls");
     printf("\n\t\t\t:=:=:=:=:=:=:=:=:==:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:==:=:=:=:=:=:==:=:=:=:=:==:=:=:=:==:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:==:=:=:=:=:=:\n");
     printf("\t\t\t:=:=:=:=:=:=:=:=:==:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:==:=:=:=:=:=:==:=:=:=:=:==:=:=:=:==:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:==:=:=:=:=:=:\n");
     printf("\n\t\t\t\t\t\t\t\t\t\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4");
     printf("\n\t\t\t\t\t\t\t\t\t        || NINE PUZZLE GAME ||\n");
     printf("\t\t\t\t\t\t\t\t\t    || CREATED BY KUMARJIT MONGAL ||\n");
     printf("\t\t\t\t\t\t\t\t\t\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4\n");
     printf("\n\t\t\t:=:=:=:=:=:=:=:=:==:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:==:=:=:=:=:=:==:=:=:=:=:==:=:=:=:==:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:==:=:=:=:=:=:\n");
     printf("\t\t\t:=:=:=:=:=:=:=:=:==:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:==:=:=:=:=:=:==:=:=:=:=:==:=:=:=:==:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:==:=:=:=:=:=:\n");

}

int main()
{
   int arr[3][3],k,l;
   Font();  
   printf("\n\nENTER YOUR NAME:- ");
   fflush(stdin);
   fgets(name,30,stdin);
   l=strlen(name);
   name[l-1]='\0';
   printf("\nPRESS 1 FOR START THE GAME:- ");
   scanf("%d",&k);
   printf("\n");
   if(k==1)
   {
       input(arr,3);
       output(arr,3);
       swap(arr,3,1,1);
   }
   else
   {
     	printf("\n\n\tNOW YOU ARE EXIT FROM THE GAME__________________________________________________________\n");
   }
  return 0;
}
