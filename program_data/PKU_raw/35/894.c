void main()
{
	int a[8][8];
	int i,j,k;
	int m,n,t=0;
	int max_i,max_j;
	int mark_1=0,mark_2=0;

	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}


	for(i=0;i<m;i++)
	{
		mark_2=0;
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				if(a[i][j]>a[i][k])
					mark_1++;
			}
			if(mark_1==n-1)
			{
				max_i=i;
				max_j=j;
			}
			mark_1=0;
		}
		for(k=0;k<m;k++)
		{
			if(a[max_i][max_j]<a[k][max_j])
				mark_2++;
		}
		if(mark_2==m-1)
			t++;break;
	}
	if(t==0)
		printf("No\n");
	else
		printf("%d+%d\n",max_i,max_j);
}

