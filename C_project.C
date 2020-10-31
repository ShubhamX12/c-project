#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int n;
	int i,j;

	clrscr();
	while(1)
	{
	printf("\n ************************* Alaphabate printing  MENU ************************");
	printf("\n 1.A \t 2.B \t 3.C \t 4.D \t 5.E \t 6.F \t 7.G \t 8.H\t 9.I\t 10.J");
	printf("\n 11.k \t 12.l \t 13.m \t 14.n \t 15.o \t 16.p \t 17.Q \t 18.R\t 19.s\t 20.T");
	printf("\n 21.U \t 22.V \t  23.W \t  \t 24.X \t  \t 25.Y\t \t 26.Z\t27.exit");
	printf("\n Enter choice:-");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if(i==0 || i==2 || j==0 ||j==4)
						printf("*");
					else
						printf(" ");

				}
				printf("\n");
			}
			break;
		case 2:
				for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if(i==0 || i==2 || i==4 ||j==0||j==4)
						printf("*");
					else
						printf(" ");

				}

				printf("\n");

			}
			break;
		case 3:
				for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if(i==0 || i==4|| j==0 )
						printf("*");
					else
						printf(" ");

				}

				printf("\n");

			}
			break;
		case 4:

				for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if(i==0 || i==4|| j==0 ||j==4)
						printf("*");
					else
						printf(" ");

				}
				printf("\n");

			}
			break;
		case 5:

				for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if(i==0 || i==4|| j==0 || i==2)
						printf("*");
					else
						printf(" ");

				}
				printf("\n");

			}
			break;
		case 6:

				for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if(i==0 || i==2|| j==0 )
						printf("*");
					else
						printf(" ");

				}
				printf("\n");

			}
			break;
		case 7:
			for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if(i==0 || i==4|| j==0||(i==2 && j==3)||(i==2 && j==4)||(i==3 &&j==4)||(i==3 && j==3) )
						printf("*");
					else
						printf(" ");

				}
				printf("\n");

			}
			break;
		case 8:

				for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if(j==0 || i==2|| j==4 )
						printf("*");
					else
						printf(" ");

				}
				printf("\n");

			}
			break;
		case 9:

				for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if(i==0 || j==2|| i==4 )
						printf("*");
					else
						printf(" ");

				}
				printf("\n");

			}
			break;
		case 10:

				for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if(i==0 || j==2|| (i==3 && j==0)||(i==4 && j==0)||(i==4 && j==1))
						printf("*");
					else
						printf(" ");

				}
				printf("\n");

			}
			break;
		case 11:

			for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if(j==0 ||(i==1 && j==2)|| (i==0 && j==3) ||(i==3 && j==2)||(i==4 && j==3))
						printf("*");
					else
						printf(" ");

				}
				printf("\n");

			}
			break;
		case 12:

				for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if(j==0 || i==4 )
						printf("*");
					else
						printf(" ");

				}
				printf("\n");

			}
			break;
		case 13: //m

				for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if(j==0 ||(j==2 && i==2 )|| j==4 )
						printf("*");
					else
						printf(" ");

				}
				printf("\n");

			}
			break;
		case 14://n

				for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if(j==0 || i==j|| j==4 )
						printf("*");
					else
						printf(" ");

				}
				printf("\n");

			}
			break;
		case 15://o

				for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if(i==0 || j==0|| i==4||j==4 )
						printf("*");
					else
						printf(" ");

				}
				printf("\n");

			}
			break;
		case 16:
			//p

				for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if(j==0||i==0||i==2||(i==1 && j==4))
						printf("*");
					else
						printf(" ");

				}
				printf("\n");

			}
			break;
		case 17://q

				for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if(i==0 || i==2|| j==4 ||(i==1 && j==0) )
						printf("*");
					else
						printf(" ");

				}
				printf("\n");

			}
			break;
		case 18://R

				for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if(i==0 || j==0|| i==2||(i==1 && j==4)||(i==3 && j==3) ||(i==4 && j==4))
						printf("*");
					else
						printf(" ");

				}
				printf("\n");

			}
			break;
		case 19: //s

				for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if(i==0 || i==2|| i==4||(i==1 && j==0)||(i==3 && j==4) )
						printf("*");
					else
						printf(" ");

				}
				printf("\n");

			}
			break;
		case 20:
			//t

				for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if(i==0 || j==2 )
						printf("*");
					else
						printf(" ");

				}
				printf("\n");

			}
			break;
		case 21://u

				for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if(j==0 || j==4|| i==4 )
						printf("*");
					else
						printf(" ");

				}
				printf("\n");

			}
			break;
		case 22://v

				for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if((i==3 && j==0) || (i==4 && i==2)|| (i==3 && j==4) )
						printf("*");
					else
						printf(" ");

				}
				printf("\n");

			}
			break;
		case 23: //w

				for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if(j==0 || (i==3 && j==2)|| j==4 )
						printf("*");
					else
						printf(" ");

				}
				printf("\n");

			}
			break;
		case 24://x
				for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if((i==4 && j==0)||(i==3 && j==1)||(i==2 && j==2) || j==i|| (i==1 && j==3)||(i==0 && j==4) )
						printf("*");
					else
						printf(" ");

				}
				printf("\n");

			}
			break;
		case 25://y

				for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if((i==0 && j==0)||(i==1 && j==1) || (i==1 && j==3)||(i==0 && j==4)||(i==3 && j==2)||(i==4 && j==2) )
						printf("*");
					else
						printf(" ");

				}
				printf("\n");

			}
			break;
		case 26: //

				for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if(i==0||i==4||(i==4 && j==0)||(i==3 && j==1)||(i==2 && j==2) || (i==1 && j==3)||(i==0 && j==4) )
						printf("*");
					else
						printf(" ");

				}
				printf("\n");

			}
			break;
		case 27:exit(0);
		default:
		printf("\nEnter invalid case");


	}
	sleep(5);
	clrscr();
	}


 getch();
}
