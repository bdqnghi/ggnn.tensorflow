void main()
{
	int a[9][9],h,l,i,j,k,max,maxl,min,minh,cas=0;
	char in[100];
	scanf("%d,%d",&h,&l);
	for(i=1;i<=h;i++)
		for(j=1;j<=l;j++)
			scanf("%d",&a[i][j]);
	for(i=1;i<=h;i++)
	{
		max=a[i][1];maxl=1;
		for(j=1;j<=l;j++)
			if(a[i][j]>max)
			{
				max=a[i][j];
				maxl=j;
			}
		min=a[1][maxl];minh=1;
		for(k=2;k<=h;k++)
			if(a[k][maxl]<min)
			{
				min=a[k][maxl];
				minh=k;
			}
		if(minh==i)
		{cas=1;printf("%d+%d\n",i-1,maxl-1);}
	}
	if(cas==0)
		printf("No\n");
}