void main(void)
{
	int a[300], b[300];
	int n, i, j;
	float max, sum = 0, ave;
	scanf("%d", &n);
	for(i = 0;i < n;i ++)
	{	
		scanf("%d",&a[i]);
		sum += a[i];
	}
	ave = sum / n;
	for(i = 0;i < n;i ++)
	{
		for(j = 0;j < n - 1;j ++)
			if(a[j] > a[j + 1])
			{
				max = a[j];
				a[j] = a[j + 1];
				a[j + 1] = max;
			}
	}
	if(ave - a[0] > a[n - 1] - ave)
		max = ave - a[0];	
	else
		max = a[n - 1] - ave;
	j = 0;
	for(i = 0;i < n;i ++)
		if(fabs(fabs(a[i] - ave) - max) < 1e-5)
		{	b[j] = a[i];
			j++;
		}
	for(i = 0;i < j - 1;i ++)
		printf("%d,",b[i]);
	printf("%d",b[j - 1]);
}