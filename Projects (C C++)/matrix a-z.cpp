int addition();
int subtraction();
int multiplication();
int divison();
int transpose();
#include<stdio.h>
#include<conio.h>
#include<dos.h>
int main()
{
    printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
	printf("\t\t\t\t MATRIX ALL OPERATION USING C");
	printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
	int ch,i=1;
	do
	{
		printf("\n1.ADDITION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISON\n5.TRANSPOSE\n6.EXIT\n");
		printf("\n\t\t\t\5 %d-NO OPERATION \5\n",i);
		printf("Enter your choice:- ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					addition();
					break;
				}
			case 2:
				{
					subtraction();
					break;
				}	
			case 3:
				{
					multiplication();
					break;
				}	
			case 4:
				{
					divison();
					break;
				}
			case 5:
				{
					transpose();
					break;
				}
			case 6:
				{
					printf("\nExit Point");
					break;
				}
			default:
			{
				printf("You chose a wrong choice chose again between[1/2/3/4/5]:- ");
				break;
			}	
		}
		i++;
		
	} while(ch!=6);
	
	return 0;
}
int addition()
{
	int a[10][10],b[10][10],sum[10][10];
	int i,j,r,c;
	
    printf("\nEnter the number of rows of the first matrix:- ");
	scanf("%d",&r);
	printf("Enter the number of columns of the first matrix:- ");
	scanf("%d",&c);
	printf("Enter the first matrix elements:-\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Enter the number of rows of the second matrix:- ");
	scanf("%d",&r);
	printf("Enter the number of columns of the second matrix:- ");
	scanf("%d",&c);
	printf("Enter the second matrix elements:-\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("The sum of two matrix is:-\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
}
int subtraction()
{
	
int a[10][10],b[10][10],sub[10][10];
	int i,j,r,c;
	
	printf("\nEnter the number of rows of the first matrix:- ");
	scanf("%d",&r);
	printf("Enter the number of columns of the first matrix:- ");
	scanf("%d",&c);
	printf("Enter the first matrix elements:-\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Enter the number of rows of the second matrix:- ");
	scanf("%d",&r);
	printf("Enter the number of columns of the second matrix:- ");
	scanf("%d",&c);
	printf("Enter the second matrix elements:-\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			sub[i][j] = a[i][j] - b[i][j];
		}
	}
	printf("The sub of two matrix is:-\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",sub[i][j]);
		}
		printf("\n");
	}
}
int multiplication()
{

	int a[10][10],b[10][10],m[10][10];
	int i,j,k,r1,c1,r2,c2;
	printf("Enter the number of row of the first matrix:- ");
	scanf("%d",&r1);
	printf("Enter the number of column of the first matrix:- ");
	scanf("%d",&c1);
	printf("Enter the elements of the first matrix:-\n");
	for(i=0; i<r1; i++)
	{
		for(j=0; j<c1; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Enter the number of row of the second matrix:- ");
	scanf("%d",&r2);
	printf("Enter the number of column of the second matrix:- ");
	scanf("%d",&c2);
	printf("Enter the elements of the second matrix:-\n");
	for(i=0; i<r2; i++)
	{
		for(j=0; j<c2; j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	if (c1 == r2)
	{
		
    for(i=0; i<r1; i++)
	{
		for(j=0; j<c2; j++)
		{
			m[i][j]=0;
			
		for(k=0; k<c1; k++)
		{
			m[i][j] += a[i][k] * b[k][j];
		}
		}
	}
	printf("After completing the multiplication. the matrix form is:-\n");
	for(i=0; i<r1; i++)
	{
		for(j=0; j<c2; j++)
		{
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
}
	
else
{
	printf("matix multiplication is not possible");
}	
}

int divison()
{

	int a[10][10],b[10][10],div[10][10];
	int i,j,r,c;
	
	printf("\nEnter the number of rows of the first matrix:- ");
	scanf("%d",&r);
	printf("Enter the number of columns of the first matrix:- ");
	scanf("%d",&c);
	printf("Enter the first matrix elements:-\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Enter the number of rows of the second matrix:- ");
	scanf("%d",&r);
	printf("Enter the number of columns of the second matrix:- ");
	scanf("%d",&c);
	printf("Enter the second matrix elements:-\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			div[i][j] = a[i][j] / b[i][j];
		}
	}
	printf("The divison of two matrix is:-\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",div[i][j]);
		}
		printf("\n");
	}
}
 int transpose()
{
	int a[10][10],t[10][10];
	int r,c,i,j;
	printf("Enter the number of row of the matrix:- ");
	scanf("%d",&r);
	printf("Enter the number of column of the matrix:- ");
	scanf("%d",&c);
	printf("Enter the elements:- \n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
		scanf("%d",&a[i][j]);
	    }
	}
	printf("Before transpose the matrix from is:- \n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
		 printf("%d ",a[i][j]);
	    }
	    printf("\n");
	}
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
		    t[j][i] = a[i][j];
	    }
	}
	
	printf("After transpose the matrix from is:- \n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
		  printf("%d ",t[i][j]);
	    }
	    printf("\n");
	}
	
}
