int y=0;
int anti(int x)
{
	y=10*y+x%10;
	x=x/10;
	if(x!=0)
		anti(x);
	return(y);
}
int su(int n)
{
	int i,a=1;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
			a=0;
	}
	return a;
}
void main()
{
	int x1,x2,m,n=0,a,i,j=0;
	scanf("%d%d",&x1,&x2);
	for(i=x1;i<=x2;i++)
	{
		m=anti(i);
		y=0;
		a=su(i);
		if(m==i&&a==1)
		{
			j++;
			if(j==1)
				printf("%d",i);
			else
				printf(",%d",i);
		}
		else
			n++;
	}
	if(n-1==x2-x1)
		printf("no");	
}

			
