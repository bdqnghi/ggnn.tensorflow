int main()
{
	int m,n,i,j,k,flag=0,f=0,deter=0;
	int a[10][10];
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
    for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				if(a[i][j]>=a[i][k])
				{
					f++;
				}
			}
			if(f==n)
				flag++;
			f=0;
			for(k=0;k<m;k++)
			{
				if(a[i][j]<=a[k][j])
					f++;
			}
			if(f==m)
				flag++;
			f=0;
			if(flag==2)
			{
				printf("%d+%d",i,j);
				deter=1;
			}
			flag=0;
		}
	}
	if(deter==0)
		printf("No");
	return 0;
}
