void main()
{
	int m,N,n,o,i,j,r,a[200][200]={0};  scanf("%d",&n);for(N=1;N<=n;N++)
{r=0;
for(i=0;i<=n-1;i++)for(j=0;j<=n-1;j++)scanf("%d",&a[i][j]);    for(m=0;m<=n-2;m++)
{
	for(i=0;i<=n-1;i++){{if((i>=1)&&(i<=m)){i=m;continue;}}
		o=a[i][0];   for(j=1;j<=n-1;j++){{if((j>=1)&&(j<=m)){j=m;continue;}}o=(o<=a[i][j])?o:a[i][j];} 
		for(j=0;j<=n-1;j++){{if((j>=1)&&(j<=m)){j=m;continue;}}a[i][j]=a[i][j]-o;}}
	for(j=0;j<=n-1;j++){{if((j>=1)&&(j<=m)){j=m;continue;}}
		o=a[0][j];   for(i=1;i<=n-1;i++){{if((i>=1)&&(i<=m)){i=m;continue;}}o=(o<=a[i][j])?o:a[i][j];} 
		for(i=0;i<=n-1;i++){{if((i>=1)&&(i<=m)){i=m;continue;}}a[i][j]=a[i][j]-o;}}
r=r+a[1+m][1+m];
}
printf("%d\n",r);
}

}
