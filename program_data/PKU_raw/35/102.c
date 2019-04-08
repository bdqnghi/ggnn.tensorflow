main()
{
	int m,n;
	scanf("%d,%d",&m,&n);
	int a[8][8];int i,j,k,l;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int fuck=0;
    for(i=0;i<m;i++)
	{
		int max=0,loc=0,num=0;
		for(j=0;j<n;j++)
		{
			if(a[i][j]>max){max=a[i][j];loc=j;}
		}
		for(j=0;j<m;j++)
		{
			if(a[j][loc]<a[i][loc])break;
			else num++;
		}
		if(num<m)continue;
		else {printf("%d+%d",i,loc);fuck=1;break;}
	}
	if(fuck==0)printf("No");
}