void main()
{
	int i,j,k=0,l,m,t,a[100][100],c[100];
	for(i=1;;i++)
	{
		j=1;
		scanf("%d",&a[i][j]);
		if(a[i][j]==-1)break;
		for(j=2;j<100;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]==0)break;
			for(l=j;l>=1;l--)
			{
				if(a[i][j]==2*a[i][l]||2*a[i][j]==a[i][l])c[i]++;
				else continue;
			}
		}
		k++;
	}
	for(m=1;m<=k;m++)
	{
		printf("%d\n",c[m]);
	}
}