

int main()
{
int x[10][10];
int a;
int i,j;
int a1,a2,b1,b2;
int s;
a1=a2=b1=b2=0;
scanf("%d",&a);
for (i=1;i<=a;i++)
{
	for(j=1;j<=a;j++)
	{
		scanf("%d",&x[i][j]);
	}
}
for(i=1;i<=a;i++)
{
	for(j=1;j<=a;j++)
	{
		if(x[i][j]==0)
		{
			a1=i;
			b1=j;
			
		}

	}


	
}
for(i=a;i>=1;i--)
{
	for(j=a;j>=1;j--)
	{
		if(x[i][j]==0)
		{
			a2=i;
			b2=j;
			
		}


	}

	
}
int c,d;
c=a1-a2-1;
d=b1-b2-1;
s=c*d;
printf("%d",s);
return 0;

}