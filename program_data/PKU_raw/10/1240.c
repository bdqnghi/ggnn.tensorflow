int main()
{
	int *p,*num;
	int n,add;
	
	scanf ("%d",&n);
	p=(int*)malloc(sizeof (int)*n);
	num=(int*)malloc(sizeof (int)*n);


	for (int i=0;i<=n-1;i++)
	{
		scanf ("%d",p+i);
		*(num+i)=1;
	}

	for (int i=n-2;i>=0;i--)
	{
		add=0;
		for (int k=i+1;k<=n-1;k++)
		{
			if (*(p+i)>=*(p+k)&&*(num+k)>add)
				add=*(num+k);
			//printf ("%d",*(num+k));
			//printf ("%d",add);
		}
		*(num+i)+=add;
	}
	int maxnum=0;
	for (int i=0;i<=n-1;i++)
	{
		if (*(num+i)>maxnum)
			maxnum=*(num+i);
		//printf ("%d",*(num+i));
	}
	printf ("%d",maxnum);
	
	return 0;
}
