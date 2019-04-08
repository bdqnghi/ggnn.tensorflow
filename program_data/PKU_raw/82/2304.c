int main()
{
	int n;
	int i=0;
	scanf("%d",&n);
	//int m;
	
	int a[200];
	int time[100];
	//m=2*n;
	for(i=0;i<200;i++)
		a[i]=0;
	for(i=0;i<100;i++)
		time[i]=0;
	for(i=0;i<2*n;i++)
		scanf("%d",&a[i]);
	int m=0;
	for(i=0;i<2*n;i=i+2)
	{
		if(a[i]>=90&&a[i]<=140&&a[i+1]>=60&&a[i+1]<=90)
			time[m]++;
		else
			m++;
	}
	int max=0;
	for(i=0;i<100;i++)
	{
		if(time[i]>max)
			max=time[i];
	}

	printf("%d\n",max);
	return 0;
}
