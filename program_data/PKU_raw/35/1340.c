int main()
{
	int a[8][8];
	int m,n; /*m,n?????????*/
	int i,i1,j,maxi,maxj;
	int flag=1;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<m;i++)
	{
		flag=1;
		for(j=0;j<n;j++)
		{
			if(a[i][j]>=a[i][0])
			{
				maxi=i;
				maxj=j;
			}
		}
		for(i1=0;i1<m;i1++)
		{
			if(a[i1][maxj]<a[maxi][maxj])
				flag*=0;
			else
				flag*=1;
		}
		if(flag==1)
		{	
			printf("%d+%d\n",maxi,maxj);
			break;
		}
	}
	if(flag==0)
		printf("No\n");
	return 0;
}

