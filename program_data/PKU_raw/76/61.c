int main ()
{
	int n,i,j,k,a,b,min;
	int sz[50000],sc[50000];
	scanf ("%d",&n);
	min=n-1;
	for (i=0;i<n;i++)
		scanf ("%d %d",&sz[i],&sc[i]);
	for (i=0;i<n;i++)
	{
		for (j=n-1;j>=i;j--)
		{
			if (sz[j]<sz[min])
			{
				min=j;
			}
		}
		a=sz[i];
		sz[i]=sz[min];
		sz[min]=a;
		b=sc[i];
		sc[i]=sc[min];
		sc[min]=b;
		min=n-1;
	}
	for(k=1;k<n;k++)
	{
		if (sz[k]<=sc[k-1])
		{
			if(sc[k]<sc[k-1])
			{
				sc[k]=sc[k-1];
			}
		}
		else 
		{
			b=1;
			printf ("no\n");
			break;
		}
	}
	if (b!=1)
		printf ("%d %d\n",sz[0],sc[n-1]);
	return 0;
}