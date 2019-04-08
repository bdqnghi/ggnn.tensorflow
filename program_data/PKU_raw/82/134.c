int main()
{
	int n;
	scanf("%d",&n);
	int sz[100][2],sz2[100];
	int i,j,flag=0,e,max;
	for(i=0;i<n;i++)
    {
		for(j=0;j<2;j++)
		{
			scanf("%d",&sz[i][j]);
		}
	}
    for(i=0;i<n;i++)
    {
        if(sz[i][0]>=90&&sz[i][0]<=140&&sz[i][1]>=60&&sz[i][1]<=90)
		{
			flag=flag+1;
		}
		else
		{
			flag=0;
		}
		sz2[i]=flag;
	}
	for(i=0;i<n-1;i++)
	{
		if(sz2[i]>sz2[i+1])
		{
			e=sz2[i+1];
			sz2[i+1]=sz2[i];
			e=sz2[i];
		}
	}
	max=sz2[n-1];
	printf("%d",max);
	return 0;
}







