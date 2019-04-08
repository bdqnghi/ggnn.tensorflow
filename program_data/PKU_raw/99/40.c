void main()
{
	int n,i;
	int a[100];
	double b[4],c[4]={0};
	double m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<=18) c[0]++;
		else if(a[i]>18&&a[i]<=35) c[1]++;
		else if(a[i]>35&&a[i]<=60) c[2]++;
		else c[3]++;
	}
	m=n;
	for(i=0;i<n;i++)
		b[i]=c[i]*100/m;
	printf("1-18: %.2lf%%\n",b[0]);
	printf("19-35: %.2lf%%\n",b[1]);
	printf("36-60: %.2lf%%\n",b[2]);
	printf("60??: %.2lf%%",b[3]);
}
