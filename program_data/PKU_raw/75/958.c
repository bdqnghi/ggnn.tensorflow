void main()
{
	int a[1001][2]={0},n=1,i=0,j,min,max,sum,MAX=0;
	char c;
	scanf("%d",&a[0][0]);
	min=a[0][0];
	while((c=getchar())!='\n')
	{
		scanf("%d",&a[n++][0]);
		if(a[n-1][0]<min)min=a[n-1][0];
	}
	scanf("%d",&a[0][1]);
	n=1;
	max=a[0][1];
	while((c=getchar())!='\n')
	{
		scanf("%d",&a[n++][1]);
		if(a[n-1][1]>max)max=a[n-1][1];
	}

	for(i=min;i<=max;i++)
	{
		sum=0;
		for(j=0;j<n;j++)
			if(i>=a[j][0]&&i<a[j][1])sum++;
		if(sum>MAX)MAX=sum;
	}
	printf("%d %d\n",n,MAX);
}