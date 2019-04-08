void main ()
{
	int n,a[301],i=0,j,f,k=0;
	scanf ("%d",&n);
	while (k<n)
	{
		scanf ("%d",&a[i]);
		for (j=0,f=1;j<i;j++)
		{
			if (a[j]==a[i]) f=0;
		}
		if (f==1) i++;
		k++;
	
	}
	for (j=0;j<i-1;j++) printf ("%d,",a[j]);
	printf ("%d",a[i-1]);
}

