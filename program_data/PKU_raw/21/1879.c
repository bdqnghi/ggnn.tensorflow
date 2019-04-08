void main()
{
	int n,i,j,k,total=0,a[300];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	float N,b[300]={0.0000},c[300]={0.0000};
	for(i=0;i<n;i++)
	{
		total=total+a[i];
	}
	N=(float)total/n;
	for(i=0;i<n;i++)
	{
		if(a[i]>=N)b[i]=a[i]-N;
		else c[i]=N-a[i];
	}
	
    float bmax=0.0000,cmax=0.0000;	
	for(i=0;i<n;i++)
		{
			if(b[i]>bmax)
			{
				bmax=b[i];
			  	j=i;
			}
			if(c[i]>cmax)
			{
				cmax=c[i];
				k=i;
	         }
	     }
			if(bmax==cmax)printf("%d,%d",a[k],a[j]);
			else if(bmax>cmax)printf("%d",a[j]);
			else if(cmax>bmax)printf("%d",a[k]);
	return;
}