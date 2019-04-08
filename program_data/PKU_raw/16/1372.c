int main()
{
	
	int n,s=0,a,i,j=0;
	scanf("%d",&n);
	if(n==0)
	{
		printf("0");
	}
	else 
	{
		for(i=1;i<=5;i++)
		{
			a=n%10;
			if(a==0)
			{
				j=j+1;
			}
			n=n/10;
			s=s*10+a;
			if(n==0)
			{break;}
		}
		for(i=0;i<j;i++)
		{
			if(j==0)
			{break;}
			printf("0");
		}
		printf("%d",s);
	}
	return 0;
}