void main()
{
	void pro(int n);
	int n;
	scanf("%d\n",&n);
	pro(n);
}
void pro(int n)
{
	int *odd(int n),*head;
	int i,j;
	head=odd(n);
	for(i=0;head[i]<=n/2;i++)
		for(j=i;head[j]!=0;j++)
		{
			if(head[i]+head[j]==n)printf("%d %d\n",head[i],head[j]);
		}
}
int *odd(int n)
{
	int i,j,k,m=0;
	int a[1000]={0};
	for(i=3;i<n;i+=2)
	{
		k=sqrt(i);
		for(j=2;j<=k;j++)
		{	if(i%j==0)break;}
		if(j>k)
		{
			a[m]=i;m++;
		}
	}
	return(a);
}

