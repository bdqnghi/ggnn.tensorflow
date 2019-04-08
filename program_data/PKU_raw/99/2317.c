int main()
{
	int n,a[100],i,k,b[4]={0};
	double c[4];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<=18)
			b[0]++;
	    if(a[i]>18&&a[i]<36)
			b[1]++;
		if(a[i]>=36&&a[i]<=60)
			b[2]++;
		if(a[i]>60)
			b[3]++;
	}
	for(k=0;k<4;k++)
	{
		c[k]=b[k]*100.0/n;
	}
	printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%",c[0],c[1],c[2],c[3]);
	return 0;
}