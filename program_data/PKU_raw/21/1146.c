int main()
{
	int i,j,tmp,n,sum=0,p=0;
	double average=0,b[300]={0},max=0;
	int a[300]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	for(i=1;i<n;i++)
		for(j=0;j<n-i;j++)
		{
		if(a[j]>a[j+1])
		{
			tmp=a[j+1];
			a[j+1]=a[j];
			a[j]=tmp;
		}
		}
	average=(sum*1.0)/(n*1.0);
	for(i=0;i<n;i++)
		b[i]=fabs(a[i]-average);
	
	for(i=0;i<n;i++)
		if(max<b[i]) max=b[i];
	for(i=0;i<n;i++)
	{	if(b[i]==max) {printf("%d",a[i]); p=i;break;}}
	for(i=p+1;i<n;i++)
		if(b[i]==max) printf(",%d",a[i]);

	return 0;
}
