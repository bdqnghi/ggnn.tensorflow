void main()
{
	int *p,i,j,n,m,a[200000],k=0;
	scanf ("%d\n",&n);
	p=a;
	for (i=0;i<n;i++)
	{
		scanf ("%d",(p+i));
	}
	scanf ("%d",&m);
	for (i=0,p=a;i<n;i++)
	{
		if (*(p+i)==m)
		{
			k++;
			for (j=i;j<n;j++)
			{
				*(p+j)=*(p+j+1);
			}
			i--;
		}
	}
	for (i=0,p=a;i<n-k-1;i++)
	{
		printf ("%d ",*(p+i));
	}
	printf ("%d",*(p+n-k-1));
}