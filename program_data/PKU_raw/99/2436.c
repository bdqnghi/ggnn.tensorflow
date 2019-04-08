void main()
{
	int a[100];
	int n,i;
	float c[4],b[4]={0};
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<=18)
			b[0]++;
		else if(a[i]<=35)
			b[1]++;
		else if(a[i]<=60)
			b[2]++;
		else
			b[3]++;
	}
	for(i=0;i<=3;i++)
        c[i]=100*b[i]/n;
	printf("1-18: %.2f%%\n",c[0]);
	printf("19-35: %.2f%%\n",c[1]);
	printf("36-60: %.2f%%\n",c[2]);
	printf("60??: %.2f%%\n",c[3]);
}