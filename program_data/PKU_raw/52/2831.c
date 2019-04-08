void main()
{
	int m,n,a[10000],i,j,k;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	j=n;
	k=0;
	
	for(i=0;i<n;i++)
	{
		a[j]=a[i];
	    j++;
	}
	for(j=2*n-m;j<2*n;j++)
	{
	    
	    a[k]=a[j];
	    k++;
	}
	for(j=n;j<2*n-m;j++)
	    a[j-n+m]=a[j];
	
	
	
	    printf("%d",a[0]);
	    for(i=1;i<n;i++)
	    printf(" %d",a[i]);
}