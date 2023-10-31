#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void set_zero(int a[3][3]);
void print_the_box(int a[3][3]);
void user1_input(int a[3][3]);
void user2_input(int a[3][3]);
void user_1(int a[3][3]);
void user_2(int a[3][3]);
void start(int k[3][3]);
void check_win_user1(int w1[3][3]);
void check_win_user2(int w2[3][3]);
void frame();
char p1[50],p2[50];
int main()
{
	int m[3][3];
	int i=0,j,user1,user2,r,c,s=1;
	printf("\t\t\t\t\t\t\t[GAME NAME:- CRISS(\1)_&_CR0SS(\2)]\n");
	printf("\n\t\t\t\t\t\t[WELLCOME:- GRAND WELLCOME IN CRISS(\1)_&_CR0SS(\2)]\n");
	printf("\n\t\t\t\t\t\t\t [ CREATOR:- KUMARJIT MONGAL ]\n");
	printf("\n\t\t\t[HOW TO PLAY:- [\4\4\4].FILL THE BLANK SPACES WITH 3 AND 1 PLAYER_1 WILL BE PUTTING 3 AND PLAYER_2 WILL BE PUTTING 1]\n");
	printf("\t\t\t\t\t\t\t __ __ __\n");
	printf("\t\t\t\t\t\t\t|__|__|__|\n");
	printf("\t\t\t\t\t\t\t|__|__|__| [DO FILL WITH 3 AND 1]\n");
	printf("\t\t\t\t\t\t\t|__|__|__|\n");
	printf("\n\4.LET\'S START_________\n");
	printf("\n\4ENTER PLAYER_1 NAME:- ");
	gets(p1);
	printf("\n\4ENTER PLAYER_2 NAME:- ");
	gets(p2);
	printf("\nPRESS 1 FOR START:- ");
	scanf("%d",&s);
	if(s==1)
	{
    set_zero(m);
    print_the_box(m);
    start(m);
    }
	return 0;
}

void set_zero(int a[3][3])
{
	int i,j;
	for(i=1; i<=3; i++)
	{
		for(j=1; j<=3; j++)
		{
			a[i][j]=0;
		}
	}
} 

void frame()
      {
        printf("\t:=:=:=:=:=:=:=:=:==:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:==:=:=:=:=:=:==:=:=:=:=:==:=:=:=:==:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:==:=:=:=:=:=:\n");
        printf("\t:=:=:=:=:=:=:=:=:==:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:==:=:=:=:=:=:==:=:=:=:=:==:=:=:=:==:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:==:=:=:=:=:=:\n");
        printf("\n\t\t\t\t\t\t\t\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4");
        printf("\n\t\t\t\t\t\t\t        || CATCH THE STAR ||\n");
        printf("\t\t\t\t\t\t\t    || CREATED BY KUMARJIT MONGAL ||\n");
        printf("\t\t\t\t\t\t\t\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4*\4\n");
        printf("\n\t:=:=:=:=:=:=:=:=:==:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:==:=:=:=:=:=:==:=:=:=:=:==:=:=:=:==:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:==:=:=:=:=:=:\n");
        printf("\t:=:=:=:=:=:=:=:=:==:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:==:=:=:=:=:=:==:=:=:=:=:==:=:=:=:==:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:==:=:=:=:=:=:\n");
  
      }

void print_the_box(int a[3][3])
{
	system("cls");
	frame();
	int m,n;
	static int l=0;
	printf("\n\t\t\t\t\t\t\t\4.[%d]-ITEM-INSERTED\n",l++);
	printf("\n\t\t\t\t\t\t\t\4.Current Situation Of The Box_____________\n\n");
	for(m=1; m<=3; m++)
	{
		printf("\t\t\t\t\t\t\t-------------\n");
		printf("\t\t\t\t\t\t\t|");
		for(n=1; n<=3; n++)
		{
			printf(" %d |",a[m][n]);
		}
		printf("\n");
	}
		printf("\t\t\t\t\t\t\t-------------\n");
		printf("\n");
}

void user1_input(int a[3][3])
{
	int r,c,p,q;
	printf("\n");
	puts(p1);
	printf("know it is your turn input row and column number\nWhere you want to put(3)\nEnter row column using this format[row space column]:- ");
	scanf("%d %d",&r,&c);
	for(p=1; p<=3; p++)
	{
		for(q=1; q<=3; q++)
		{
			if(p==r && q==c)
			{
				if(a[p][q]==0){a[p][q]=3;}
				else{printf("\nWrong entry! Enter again\n"); user1_input(a);}
			}
		}
	}
}

void user2_input(int a[3][3])
{
	int r,c,p,q;
	printf("\n");
	puts(p2);
	printf("know it is your turn input row and column number\nWhere you want to put(1)\nEnter row column using this format[row column]:- ");
	scanf("%d %d",&r,&c);
	for(p=1; p<=3; p++)
	{
		for(q=1; q<=3; q++)
		{
			if(p==r && q==c)
			{
				if(a[p][q]==0){a[p][q]=1;}
				else{printf("\nWrong entry! Enter again\n");user2_input(a);}
			}
		}
	}
}

void user_1(int a[3][3])
{
	int i;
       user1_input(a);
	print_the_box(a);
	check_win_user1(a);
}

void user_2(int a[3][3])
{
	int i;
       user2_input(a);
	print_the_box(a);
	check_win_user2(a);
}

void start(int k[3][3])
{
	int o;
   for(o=1; o<=4; o++)
     {
       user_1(k);
       user_2(k);
     } 
     if(o==5){puts(p1);puts(p2);printf("They Both are unable to win this game");}
}

void check_win_user1(int w1[3][3])
{
	 if(w1[1][1]==3 && w1[1][2]==3 && w1[1][3]==3 
	 || w1[2][1]==3 && w1[2][2]==3 && w1[2][3]==3
	 || w1[3][1]==3 && w1[3][2]==3 && w1[3][3]==3)
	 {
	  puts(p1);
	  printf("Congrats you win the Game");
	  exit(0);
	 }
else if(w1[1][1]==3 && w1[2][1]==3 && w1[3][1]==3
     || w1[1][2]==3 && w1[2][2]==3 && w1[3][2]==3
	 || w1[1][3]==3 && w1[2][3]==3 && w1[3][3]==3)
	 {
	  puts(p1);
	  printf("Congrats you win the Game");exit(0);
	 }
else if(w1[1][1]==3 && w1[2][2]==3 && w1[3][3]==3
     || w1[1][3]==3 && w1[2][2]==3 && w1[3][1]==3)
	 {
	  puts(p1);
	  printf("congrats you win the Game");
	  exit(0);
	 }	 
}

void check_win_user2(int w2[3][3])
{
	
	 if(w2[1][1]==1 && w2[1][2]==1 && w2[1][3]==1 
	 || w2[2][1]==1 && w2[2][2]==1 && w2[2][3]==1
	 || w2[3][1]==1 && w2[3][2]==1 && w2[3][3]==1)
	  {
	   puts(p2);
	   printf("Congrats you win the Game");exit(0);
	 }
else if(w2[1][1]==1 && w2[2][1]==1 && w2[3][1]==1
     || w2[1][2]==1 && w2[2][2]==1 && w2[3][2]==1
	 || w2[1][3]==1 && w2[2][3]==1 && w2[3][3]==1)
	 {
	  puts(p2);
	  printf("Congrats you win the Game");exit(0);
	 }
else if(w2[1][1]==1 && w2[2][2]==1 && w2[3][3]==1
     || w2[1][3]==1 && w2[2][2]==1 && w2[3][1]==1)
	 {
	  puts(p2);
	  printf("Congrats you win the Game");exit(0);
	 }
}
