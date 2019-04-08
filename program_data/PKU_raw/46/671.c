void main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int a[100][100];
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	int hd/*?????*/,hu/*?????*/,lr/*?????*/,ll/*?????*/;

	if(m%2==0 && m<=n)                     //???????? ??????????
	{
	for(i=0,j=0;i<=(m/2-1);i++,j++)           //????????? ???????? ????????
	{
	for(lr=j;lr<(n-j);lr++)
		printf("%d\n",a[i][lr]);
	for(hd=i+1;hd<(m-i);hd++)
		printf("%d\n",a[hd][n-1-j]);
	for(ll=n-2-j;ll>=j;ll--)
		printf("%d\n",a[m-1-i][ll]);
	for(hu=m-2-i;hu>i;hu--)
		printf("%d\n",a[hu][j]);
	}
	}


	if(n%2==0 && m>n)
	{
	for(i=0,j=0;j<=(n/2-1);i++,j++)
	{
	for(lr=j;lr<(n-j);lr++)
		printf("%d\n",a[i][lr]);
	for(hd=i+1;hd<(m-i);hd++)
		printf("%d\n",a[hd][n-1-j]);
	for(ll=n-2-j;ll>=j;ll--)
		printf("%d\n",a[m-1-i][ll]);
	for(hu=m-2-i;hu>i;hu--)
		printf("%d\n",a[hu][j]);
	}
	}

	if(m>n && n%2!=0)
	{
	for(i=0,j=0;j<=((n-1)/2-1);i++,j++)
	{
	for(lr=j;lr<(n-j);lr++)
		printf("%d\n",a[i][lr]);
	for(hd=i+1;hd<(m-i);hd++)
		printf("%d\n",a[hd][n-1-j]);
	for(ll=n-2-j;ll>=j;ll--)
		printf("%d\n",a[m-1-i][ll]);
	for(hu=m-2-i;hu>i;hu--)
		printf("%d\n",a[hu][j]);
	}
	for(j=(n-1)/2;j<m-(n-1)/2;j++)
		printf("%d\n",a[j][(n-1)/2]);
	}

	if(m<=n && m%2!=0)
	{
	for(i=0,j=0;i<=((m-1)/2-1);i++,j++)
	{
	for(lr=j;lr<(n-j);lr++)
		printf("%d\n",a[i][lr]);
	for(hd=i+1;hd<(m-i);hd++)
		printf("%d\n",a[hd][n-1-j]);
	for(ll=n-2-j;ll>=j;ll--)
		printf("%d\n",a[m-1-i][ll]);
	for(hu=m-2-i;hu>i;hu--)
		printf("%d\n",a[hu][j]);
	}
	for(i=(m-1)/2;i<n-(m-1)/2;i++)
		printf("%d\n",a[(m-1)/2][i]);
	}

}
