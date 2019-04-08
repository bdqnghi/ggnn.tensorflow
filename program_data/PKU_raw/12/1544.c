int main()
{
	int a[100][100]={0},i=0,j=0,n=0,l[100]={0},d,N[100]={0};
	do
	{
		j=0;
		do
		{
			scanf("%d",&a[i][j]);
			j++;
		}
		while(a[i][j-1]!=0&&a[i][j-1]!=-1);
		l[i]=j-1;
		i++;
	}
	while(a[i-1][j-1]!=-1);
	n=i-1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<l[i];j++)
		{
			for(d=j;d<l[i];d++)
			{
				if(a[i][d]==2*a[i][j]||a[i][j]==2*a[i][d])
					N[i]++;
			}
		}
	}
	for(i=0;i<n;i++)
		printf("%d\n",N[i]);
	return 0;
}