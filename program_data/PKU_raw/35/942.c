
void main()
{
	int a[8][8];
	int i,j,k,n,m;
	int line[8]={0};
	int max,lie,num=0,flag=0;

	scanf("%d,%d",&n,&m);
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	{
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<n;i++)
	{
		num=0;
		max=a[i][0];
		for(j=0;j<m;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
				line[i]=j;
			}
		}
		lie=line[i];
		for(k=0;k<n;k++)
		{
			if(a[k][lie]>=max)
				num=num+1;
		}
		if(num==n) 
		{
			printf("%d+%d",i,lie);
			flag=1;
		}
	}
	if(flag==0) printf("No");
}
