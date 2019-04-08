int main()
{
	int n,i,j;
	int count=0;
	int s=0;
	scanf("%d",&n);
	for (j=0;j<(n*n);j++)
	{
		scanf("%d",&i);
		if (i==0)
			count++;
	}
	count=count/4-1;
    s=count*count;
	printf("%d",s);
	return 0;
}
