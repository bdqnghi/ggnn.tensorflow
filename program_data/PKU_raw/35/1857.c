void main()
{
	int a[9][9]={0};
	int h=0,l=0,i=0,j=0,t=0,m=0,k=0;
	scanf("%d,%d",&h,&l);
	for(i=0;i<h;i++)
		for(j=0;j<l;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<h;i++)
	{
		m=a[i][0];
		t=0;
		for(j=0;j<l;j++)
			if(a[i][j]>m)
			{
				m=a[i][j];
				t=j;
			}
		m=a[0][t];
		k=0;
		for(j=0;j<h;j++)
			if(a[j][t]<m)
			{
				k=j;
				m=a[j][t];
			}
		if(k==i)
		{
			printf("%d+%d\n",k,t);
			break;
		}
	}
	if(i>=h)
		printf("No\n");
}
