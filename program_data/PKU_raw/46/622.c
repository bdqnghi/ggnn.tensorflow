void main()
{
	int i,j,t,a[100][100],m,n;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)for(j=0;j<n;j++)scanf("%d",&a[i][j]);
	for(i=0,j=0;i<(m/2+m%2)&&j<(n/2+n%2);i++,j++)
	{
		for(t=j;t<n-j;t++)printf("%d\n",a[i][t]);
		for(t=i+1;t<m-i;t++)printf("%d\n",a[t][n-j-1]);
		if(i<m/2)for(t=n-j-2;t>=j;t--)printf("%d\n",a[m-i-1][t]);
		if(j<n/2)for(t=m-i-2;t>=i+1;t--)printf("%d\n",a[t][j]);
	}
}

//??????????rp??……