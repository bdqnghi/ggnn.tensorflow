int main()
{
	int i,n,a[100];
	float x=0,y=0,z=0,m=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    for(i=0;i<n;i++)
	{
		if(a[i]<=18)
			x++;
		if(a[i]>=19&&a[i]<=35)
			y++;
		if(a[i]>=36&&a[i]<=60)
			z++;
		if(a[i]>60)
			m++;
	}
	x=x*1.0/n*100;
	y=y*1.0/n*100;
	z=z*1.0/n*100;
	m=m*1.0/n*100;
	printf("1-18: %.2f%%\n",x);
	printf("19-35: %.2f%%\n",y);
	printf("36-60: %.2f%%\n",z);
	printf("60??: %.2f%%\n",m);



	return 0;
}

