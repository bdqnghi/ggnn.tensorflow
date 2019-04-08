void main()
{
	int a[100];
	int b[4]={0};
	double c[4];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
    for(i=0;i<n;i++)
	{
		if(a[i]<=18)  b[0]++;
		else if(a[i]>18&&a[i]<=35)  b[1]++;
		else if(a[i]>=36&&a[i]<=60)  b[2]++;
		else   b[3]++;
	}
	for(i=0;i<4;i++)
		c[i]=(double)(b[i])/n*100;
    printf("1-18: %.2lf%%\n",c[0]);
	printf("19-35: %.2lf%%\n",c[1]);
	printf("36-60: %.2lf%%\n",c[2]);
	printf("60??: %.2lf%%\n",c[3]);
}