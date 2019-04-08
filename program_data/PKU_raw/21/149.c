void main()
{
	double a[300],sum=0,max=0,t;int i,j,n,jud=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%lf",&a[i]),sum+=a[i];
	sum/=n;
	for(i=0;i<n;i++)if(fabs(sum-a[i])>max)max=fabs(sum-a[i]);
	for(i=1;i<n;i++)for(j=0;j<n-i;j++)if(a[j]>a[j+1])t=a[j],a[j]=a[j+1],a[j+1]=t;
	for(i=0;i<n;i++)if(fabs(fabs(sum-a[i])-max)<=0.0001)
	{
		if(jud==0)jud=1,printf("%g",a[i]);
		else printf(",%g",a[i]);
	}
}
