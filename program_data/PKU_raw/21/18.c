void main()
{
	int n,i,j,q;
	float sum,ave,p1,p2,k1,k2;
	float a[300];
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
		scanf("%f",&a[i]);
	sum=0;
	for(i=0;i<=n-1;i++)
		sum=sum+a[i];
	ave=sum/n;

	q=0;
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-1;j++)		
			if(a[j]<a[i])break;	
		if(j==n)
		{
			k1=ave-a[i];
			p1=a[i];q=1;
		}
		if(q==1)break;
	}
	
	q=0;
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-1;j++)		
			if(a[j]>a[i])break;	
		if(j==n)
		{
			k2=a[i]-ave;
			p2=a[i];q=1;
		}
		if(q==1)break;
	}
	
	if(k1>k2)printf("%.0f",p1);
	else if(k1<k2)printf("%.0f",p2);
	else printf("%.0f,%.0f",p1,p2);
	

}