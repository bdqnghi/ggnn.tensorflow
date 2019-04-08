void main()
{
	int a[26],i,j,k,n=25,m=0,t,d[26],f[26];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		d[i]=1;
		f[i]=1;
	}
	for(i=n-1;i>0;i--)
	   for(k=i+1;k<=n;k++)
	   {
		   if(a[i]>=a[k])
		   {
			   for(j=i+1;j<n;j++)
				   if(a[i]>=a[j]&&d[j]>f[k])
					   f[k]=d[j];
		   d[i]=d[i]+f[k];
		   break;
		   }
	   }

	for(i=n;i>0;i--)
	{
		if(d[i]>m)
			m=d[i];
	}
	printf("%d",m);

}

    
