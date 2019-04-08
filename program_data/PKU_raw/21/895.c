void main()
{
	int i,n,a[300],*p[300],j=0,j1,j2,*temp;
	double aver=0,max=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		aver=aver+a[i];
	}
	aver/=n;
	for (i=0;i<n;i++)
		max=fabs(aver-a[i])>max?fabs(aver-a[i]):max;
	for (i=0;i<n;i++)
		if (fabs(fabs(aver-a[i])-max)<1e-6) 
		{
			p[j]=&a[i];
			j++;
		}
	for (j1=0;j1<j-1;j1++)
		for (j2=0;j2<j-1-j1;j2++)
			if (*p[j2]>*p[j2+1])
			{
				p[j2]=temp;
				p[j2]=p[j2+1];
				p[j2+1]=temp;
			}
	printf("%d",*p[0]);
	for (j1=1;j1<j;j1++)
		printf(",%d",*p[j1]);
}

