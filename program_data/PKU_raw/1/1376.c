int f(int a,int b);

int main()
{
	int n,c[100],i,a,sum;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&c[i]);
	}

	for(i=1;i<=n;i++)
	{
		a=c[i];
		sum=f(a,2);
		printf("%d\n",sum);
	}
	return 0;
}


int f(int a,int b)
{
	int sum=1;
	int i;
	if(a<b)
		return 0;
	for(i=b;i<a;i++)
	{
		if(a%i!=0)
			continue;
		else
			sum=sum+f(a/i,i);
	}
	return sum;
}





