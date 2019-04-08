int main()
{
	int n,i,*p;
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",p);
		p++;
	}
	p--;
	for(;i>0;i--,p--)
	{
		if(i==n)
			printf("%d",*p);
		else
			printf(" %d",*p);
	}
	return 0;
}