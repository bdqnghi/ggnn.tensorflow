void main()
{
	int n,i,j,k,a[100];
	scanf("%d",&n);
    for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
    for(i=0;i<2;i++)
	{
		k=i;
		for(j=1+i;j<n;j++)
		{
			if(a[j]>a[k]) k=j;
		}
		if(k!=i)
		{
			int t;
			t=a[i];
			a[i]=a[k];
			a[k]=t;
		}
		printf("%d\n",a[i]);
	}
}
