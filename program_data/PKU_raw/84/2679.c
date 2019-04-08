void main()
{
    int n,i,j,k;
	int c[100];
	n=0;k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&c[i]);
	for(j=0;j<2;j++)
	{
		for(i=n-1;i>j;i--)
		{
			if(c[i-1]<c[i])
			{k=c[i-1];c[i-1]=c[i];c[i]=k;}
		}
	}
	for(j=0;j<2;j++)
		printf("%d\n",c[j]);
}