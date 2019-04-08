void main()
{ 
	int a[8][8],h,l,flag;
	int i,j,k;
	int max;
	scanf("%d,%d",&h,&l);
	getchar();
	for(i=0;i<h;i++)
	{
		for(j=0;j<l;j++)
		{
			scanf("%d",&a[i][j]);
			getchar();
		}
	}
	for(i=0;i<h;i++)
	{
		max=0;flag=1;
		for(j=0;j<l;j++)
		{
			if(a[i][j]>max)
				max=a[i][j];
		}
		for(j=0;j<l;j++)
		{
			if(max==a[i][j])break;
		}
		for(k=0;k<h;k++)
		{
			if(a[k][j]<max)
			{
				flag=0;
				break;
			}
		}
		if(flag==0)continue;
		else
		{
			printf("%d+%d",i,j);
			break;
		}
	}
	if(flag==0)
		printf("No");
}
