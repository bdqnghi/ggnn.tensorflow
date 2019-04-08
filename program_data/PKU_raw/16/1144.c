
int main(int argc, char* argv[])
{
	int i,n,m=1,c,g;
	scanf("%d",&n);
	for (i=1;i<=5;i++)
	{
		m=m*10;
		if ((n/m)==0)
		{
			c=i;
			break;
		}
	}
	for (i=1;i<=c;i++)
	{
		g=n%10;
		if (g==0)
		{
			printf("0");
		}
		else 
		{
			printf("%d",g);
		}
		n=n/10;
	}
	printf("\n");
	return 0;
}

