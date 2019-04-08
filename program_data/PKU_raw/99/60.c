void main()
{
	int n,a[100],i;
	double b[4]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<=18)
		{b[0]++;}
		else if(a[i]>=19 && a[i]<=35)
		{b[1]++;}
		else if(a[i]>=36 && a[i]<=60)
		{b[2]++;}
		else if(a[i]>=61)
		{b[3]++;}
	}
		printf("1-18: %.2f%%\n",b[0]/n*100);
		printf("19-35: %.2f%%\n",b[1]/n*100);
		printf("36-60: %.2f%%\n",b[2]/n*100);
		printf("60??: %.2f%%\n",b[3]/n*100);
}