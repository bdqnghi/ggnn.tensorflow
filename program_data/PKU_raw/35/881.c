void main()
{
	int m,n,a[8][8],m1,n1,max,i,j,k,num;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<m;i++)
	{
		max=a[i][0];
		m1=i;
		n1=0;
		for(j=0;j<n-1;j++)
		{
			if(a[i][j]<a[i][j+1])
			{
				m1=i;
				n1=j+1;
				max=a[i][j+1];
			}
		}
		num=0;
		for(i=0;i<m;i++)
		{
			
			j=n1;
			if(a[i][j]<max)
				break;
			else
				num=num+1;

		}
		if(num==m)
			break;
	}
	if(num==m)
		printf("%d+%d\n",m1,n1);
	else
		printf("No\n");
}
