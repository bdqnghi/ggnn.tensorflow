void main()
{
	int a[8][8],an=0;
	int m,n,p,q,flag=0;
	int i,j;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	i=0;
//	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]>an)
			{an=a[i][j];p=i;q=j;}
		}

		for(i=0;i<m;i++)
		{
			if(a[i][q]<an)
			{flag=0;break;}
			else flag=1;
		}
	//	if(flag)break;
	}
	if(flag)printf("%d+%d",p,q);
	else printf("No");
}