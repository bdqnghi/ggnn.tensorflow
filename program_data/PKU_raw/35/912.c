int a[8][8],n,m,l1,l2;
int andian(int k)
{
	int i,j,flag=0,p;
	for(i=0;i<m;i++)
	{
		p=0;
		for(j=0;j<m;j++)
			if(a[k][i]>=a[k][j])
				p++;
		if(p==m)
		{
			l1=i;
			p=0;
			for(i=0;i<n;i++)
				if(a[k][l1]<=a[i][l1])
					p++;
			if(p==n)
				flag=1;
		}
	}
	return(flag);
}

void main()
{
	int i,j,p;
	scanf("%d,%d",&n,&m);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
	{
		p=0;
		p=andian(i);
		if(p==1)
		{
			printf("%d+%d\n",i,l1);
			break;
		}
	}
	if(i==n)
		printf("No\n");

}