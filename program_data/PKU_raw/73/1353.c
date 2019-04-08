int main()
{
	int a[5][5],b[5][5],site[5][5];
	int i,j,s,tmp;
	s=0;
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
	        scanf("%d",&a[i][j]);
			site[i][j]=0;
		}
	}
	for(i=0;i<=4;i++)
	{
		tmp=0;
		site[i][tmp]=1;
		for(j=0;j<=4;j++)
		{
			if(a[i][tmp]<a[i][j])
			{
				site[i][tmp]=0;
				site[i][j]=1;
				tmp=j;
			}
		}
	}
    for(j=0;j<=4;j++)
	{
		tmp=0;
		site[tmp][j]=site[tmp][j]&&1;
		for(i=1;i<=4;i++)
		{
			if(a[tmp][j]>a[i][j])
			{
				site[tmp][j]=0;
				site[i][j]=site[i][j]&&1;
				tmp=i;
			}
			else
			{
				site[i][j]=0;
			}
		}
	}
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			if(site[i][j]==1)
			{
				printf("%d %d %d\n",i+1,j+1,a[i][j]);
				s++;
				break;
			}
		}
	}
	if(s==0) printf("not found");

	return 0;
}
