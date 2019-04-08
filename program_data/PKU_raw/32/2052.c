void main()
{
	int n,j[100][2],i,a[100][100]={0},b,c[100][100]={0},d,p,q,r;
	char e[100][100],f[100][100];
	scanf("%d",&n);
    for (i=0;i<n;i++)
	{
		scanf("%s",&e[i]);
        scanf("%s",&f[i]);
	}
	for (i=0;i<n;i++)
	{
		j[i][0]=strlen(e[i]);
		j[i][1]=strlen(f[i]);
		for (p=0;p<j[i][0];p++)
             a[i][p]=e[i][j[i][0]-p-1]-48;
        for (p=0;p<j[i][1];p++)
             c[i][p]=f[i][j[i][1]-p-1]-48;
	}
	for (i=0;i<n;i++)
	{
		for(d=0;d<j[i][0];d++)
		{
			if (a[i][d]>=c[i][d])
				a[i][d]-=c[i][d];
			else
			{
				a[i][d]=a[i][d]-c[i][d]+10;
				a[i][d+1]--;
			}
		}
	}
	for (i=0;i<n;i++)
	{
		for(d=j[i][0]-1,r=0;d>=0;d--)
		{
		    if (a[i][d]!=0)
				r++;
			if (r!=0)
			printf("%d",a[i][d]);	
		}
		printf("\n");
	}
}
