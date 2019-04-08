int sushu(int a)
{
	int b=2,c,d=0,k;
		while (b<a)
		{
			c=a%b;
			if (c!=0)
			{
				b=b+1;
				d=d+1;}
		else break;
		}
		
		if(d==(a-2))
			k=1;
		else
			k=0;
	return k;
} 
int zheng(int n,int i)
{
	int sum=1,a;
	for(a=i;a<n/2;a++)
	{
		if(n%a==0)
		{
			if(a<=n/a)
			{
				sum=sum+zheng(n/a,a);
			}
		}
	}
	return sum;
}
int main ()
{
	int n,i,j=0,k=0,b[10000]={0},e[40000]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&e[i]);
	}
	for(i=0;i<n;i++)
	{
		
		if(sushu(e[i])==0)
		{
			b[i]=zheng(e[i],2);
		}
		else
		{
			b[i]=1;
		}

	}
	
	printf("%d",b[0]);
	for(i=1;i<n;i++)
		printf("\n%d",b[i]);
	return 0;
}