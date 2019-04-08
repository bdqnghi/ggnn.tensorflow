

int su(long x)
{
	int i,j=0;
	for (i=2;i<=sqrt(x);i++)
		if (x%i==0) {return(0); j=1; break;}
	if (j==0) return(1);
}

int hui(long x)
{
	int i,j;
	long y=0,p;
	p=x;
	while (x>0)
	{
      y=(10*y+x%10);
	  x=x/10;
	}
	if (p==y) return(1);
	 else return(0);
}


void main()
{
	long a,b;
	int i,j,sum=0,s[1000]={0};
	scanf("%d%d",&a,&b);
	for (i=a;i<=b;i++)
	{
		if (hui(i)==1&&su(i)==1) 
		{
			sum++;
			s[sum]=i;
		}
	}
	if (sum==0) printf("no\n");
	else 
	{
		for (i=1;i<sum;i++)
			printf("%ld,",s[i]);
		printf("%ld\n",s[sum]);
	}
}
