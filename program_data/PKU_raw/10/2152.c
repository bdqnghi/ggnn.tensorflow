main()
{
	int k,i,j,h[MAX],a[MAX],n=1;
	scanf("%d",&k);
	for (i=0;i<k;i++)
		scanf("%d",&h[i]);
	a[k-1]=1;
	for (i=k-2;i>=0;i--)
		{a[i]=1;
		for (j=i+1;j<k;j++)
			{
				if (h[j]<h[i] || h[j]==h[i])
					{if ((a[j]+1)>a[i])
						a[i]=a[j]+1;
					}
			}
			
		}
	for (i=0;i<k;i++)
		if (a[i]>n)
			n=a[i];
	printf("%d",n);
}