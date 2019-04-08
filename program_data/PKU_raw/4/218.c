int main()
{
	int n=1,h,l,i,j,a[100][100],lans=0,ans[10000],k;
	scanf("%d%d",&h,&l);
	for(i=0;i<h;i++)
		for(j=0;j<l;j++)
			scanf("%d",&a[i][j]);
		for(n=1;n<=l;n++)
			for(j=0,k=n-1;k>=0&&j<=h-1;j++,k--)
			ans[lans++]=a[j][k];
		for(n=2;n<=h;n++)
			for(j=n-1,k=l-1;j<=h-1&&k>=0;j++,k--)
				ans[lans++]=a[j][k];
		for(i=0;i<lans;i++)
			printf("%d\n",ans[i]);


	return 0;
}

