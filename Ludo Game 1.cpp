#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
int main()
{
	int p1,p2,i,j;
	char pl1[12],pl2[12];
	clrscr();
	printf("Enter player Name of 1 ==:==");
	gets(pl1);
	printf("Enter player Name of 2 ==:==");
	gets(pl2);
	for(j=0;j<10;i++)
	{
		puts(pl1);
		printf("\n\t");
		for(i=0;i<6;i++)
		{
			printf(". ");
			delay(200);
		}
		randomize();
		p1=random(3200)%6+1;
		printf("  %d",p1);
		delay(2000);
		puts(pl1);
		printf("\n\t");
		for(i=0;i<6;i++)
		{
			printf(". ");
			delay(200);
		}
		randomize();
		p2=random(2700)%6+1;
		printf("  %d\n\n",p2);
		printf("%Result ");
		delay(2000);
		if(p1<p2)
			puts(pl2);
		else if(p1==p2)
			printf("Match draw\n");
		else("")
			printf("%c win ",pl1[i]);
	}
}
