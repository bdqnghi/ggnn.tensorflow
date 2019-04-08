int main()
{
	int n;
	scanf("%d",&n);
	int a[100][2];
	int ci[100]={0},m=0;
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
		if(a[i][0]>=90&&a[i][0]<=140&&a[i][1]>=60&&a[i][1]<=90)
		{
			ci[m]++;
		}
		else
		{
			m++;
		}
	}
	int max=ci[0];;
	for(i=0;i<m+1;i++)
	{
		if(ci[i]>max)
		{
			int e;
			e=ci[i];
			ci[i]=max;
			max=e;
		}
	}

	printf("%d",max);


	return 0;
}
