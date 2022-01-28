#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	system("color 6");
	int a[5][5],b[5][5],c[5][5],m[10][10],ad[10][10],in[10][10],id[10][10];			//Declaring variables
	int i,j,k,sum,deter,x,y,z;					
	int row1,col1,row2,col2;

	printf("Please Enter 3X3 Matrix....\n");
	printf("Enter the first matrix row:- ");
	scanf("%d",&row1);
	printf("\nEnter the first matrix column:- ");
	scanf("%d",&col1);									//Order of the matrix
	printf("\nEnter the second matrix row:- ");
	scanf("%d",&row2);
	printf("\nEnter the second matrix column:- ");
	scanf("%d",&col2);
	
	if(col1==row2)					//Checking if matrix multiplication is possible or not
	{
		
		
		
		system("cls");
		for(i=0;i<=2;i++)
		{
			for(j=0;j<=2;j++)
			{
				printf("Enter the value of matrix a[%d][%d] :- ",i,j);
				scanf("%d",&a[i][j]);
			}
		}													//Initialization of the first matrix
		system("cls");
		printf("The first matrix is :- \n");
		for(i=0;i<=2;i++)
		{
			for(j=0;j<=2;j++)
			{
				printf("%d\t",a[i][j]);						//Showing the first matrix
			}
			printf("\n");
		}
		printf("Enter a character to continue......");
		getch();
		
		
		
		system("cls");
		for(i=0;i<=2;i++)
		{
			for(j=0;j<=2;j++)
			{
				printf("Enter the value of matrix b[%d][%d] :- ",i,j);
				scanf("%d",&b[i][j]);
			}												//Initialization of the first matrix
		}
		system("cls");
		for(i=0;i<=2;i++)
		{
			for(j=0;j<=2;j++)
			{
				printf("%d\t",b[i][j]);						//Showing the second matrix
			}
			printf("\n");
		}
		printf("Enter a character to show the multiplication......");
		getch();
				
		system("cls");
		for(i=0;i<=2;i++)
		{
			for(j=0;j<=2;j++)
			{
				sum=0;
				for(k=0;k<=2;k++)					//logic for matrix multiplication
				{
					sum=sum+a[i][k]*b[k][j];
				}
				c[i][j]=sum;
			}
		}
		printf("The multiplication of c (axb) matrix is :- \n");
		for(i=0;i<=2;i++)
			{
				for(j=0;j<=2;j++)
				{
					printf("%d\t",c[i][j]);						//Showing the final matrix
				}
			printf("\n");
		}
		printf("To see the determinant of the c matrix press any character......");
		getch();
		system("cls");
		x=c[1][1]*c[2][2]-c[1][2]*c[2][1];
		y=c[1][0]*c[2][2]-c[1][2]*c[2][0];
		z=c[1][0]*c[2][1]-c[1][1]*c[2][0];
		deter=x*c[0][0]-y*c[0][1]+z*c[0][2];
		system("cls");
		printf("\nThe Determinant of c matrix is :- %d",deter);				//determinant
		getch();
		system("cls");
		printf("To see the minor of c matrix press any character.....\n");
		getch();							//Minor
		m[0][0]=c[1][1]*c[2][2]-c[1][2]*c[2][1];
		m[0][1]=c[1][0]*c[2][2]-c[1][2]*c[2][0];
		m[0][2]=c[1][0]*c[2][1]-c[1][1]*c[2][0];
		m[1][0]=c[0][1]*c[2][2]-c[0][2]*c[2][1];
		m[1][1]=c[0][0]*c[2][2]-c[0][2]*c[2][0];
		m[1][2]=c[0][0]*c[2][1]-c[0][1]*c[2][0];
		m[2][0]=c[0][1]*c[1][2]-c[0][2]*c[1][1];
		m[2][1]=c[0][0]*c[1][2]-c[0][2]*c[1][0];
		m[2][2]=c[0][0]*c[1][1]-c[0][1]*c[1][0];
		for(i=0;i<=2;i++)
		{
			for(j=0;j<=2;j++)
			{
				printf("The minor of c[%d][%d] is %d\n",i,j,m[i][j]);
				Sleep(150);
			}
		}
		printf("To see the adjoint of c matrix press any character.....");
		getch();
		system("cls");
		printf("The Ad-joint of the matrix is :- \n");					//ad-joint
		ad[0][0]=m[0][0];
		ad[0][1]=m[0][1]*(-1);
		ad[0][2]=m[0][2];
		ad[1][0]=m[1][0]*(-1);
		ad[1][1]=m[1][1];
		ad[1][2]=m[1][2]*(-1);
		ad[2][0]=m[2][0];
		ad[2][1]=m[2][1]*(-1);
		ad[2][2]=m[2][2];
		for(i=0;i<=2;i++)
			{
				for(j=0;j<=2;j++)
				{
					printf("%d\t",ad[i][j]);
				}
			printf("\n");
		}
		printf("\nTo continue press any character......");
		getch();
		system("cls");
		if(deter!=0)
		{
			printf("The inverse matrix of the c matrix is :- \n");
		
			id[0][0]=1;
			id[0][1]=0;
			id[0][2]=0;
			id[1][0]=0;
			id[1][1]=1;
			id[1][2]=0;
			id[2][0]=0;
			id[2][1]=0;
			id[2][2]=1;
															//Inverse
			in[0][0]=id[0][0]*ad[0][0];
			in[0][1]=id[0][1]*ad[0][1];
			in[0][2]=id[0][2]*ad[0][2];
			in[1][0]=id[1][0]*ad[1][0];
			in[1][1]=id[1][1]*ad[1][1];
			in[1][2]=id[1][2]*ad[1][2];
			in[2][0]=id[2][0]*ad[2][0];
			in[2][1]=id[2][1]*ad[2][1];
			in[2][2]=id[2][2]*ad[2][2];
		
			for(i=0;i<=2;i++)
			{
				for(j=0;j<=2;j++)
				{
					printf("%d\t",in[i][j]);
				}
				printf("\n");
			}
		}
		else
		printf("Inverse donot exist if a matrix's determinant is 0");
		
		printf("\n");
		printf("\nT");
		Sleep(75);
		printf("h");
		Sleep(75);
		printf("i");
		Sleep(75);
		printf("s");
		Sleep(75);
		printf(" ");
		Sleep(75);
		printf("p");
		Sleep(75);
		printf("r");
		Sleep(75);
		printf("o");
		Sleep(75);
		printf("g");
		Sleep(75);
		printf("r");
		Sleep(75);
		printf("a");
		Sleep(75);
		printf("m");
		Sleep(75);
		printf(" ");
		Sleep(75);
		printf("i");
		Sleep(75);
		printf("s");
		Sleep(75);
		printf(" ");
		Sleep(75);
		printf("m");
		Sleep(75);
		printf("a");
		Sleep(75);
		printf("d");
		Sleep(75);
		printf("e");
		Sleep(75);
		printf(" ");
		Sleep(75);
		printf("b");
		Sleep(75);
		printf("y");
		Sleep(75);
		printf(" ");
		Sleep(75);
		printf("R");
		Sleep(100);
		printf("a");
		Sleep(100);
		printf("j");
		Sleep(100);
		printf("a");
		Sleep(100);
		printf(" ");
		Sleep(100);
		printf("M");
		Sleep(100);
		printf("a");
		Sleep(100);
		printf("h");
		Sleep(100);
		printf("a");
		Sleep(100);
		printf("n");
		Sleep(100);
		printf("t");
		Sleep(100);
		printf("y.");
		Sleep(100);
	}
	else
	{
		Beep(600,250);
		printf("\nPlease enter a valid matrix order!");
		Sleep(750);
	}
	
	return 0;
}
