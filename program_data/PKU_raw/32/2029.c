void main()
{
	char a[1000][100],b[1000][100],c[1000][100]={""};
	int n,i,j;
	int r[1000],l[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%s",a[i],b[i]);
		printf("\n");
	    l[i]=strlen(a[i]);
	    r[i]=strlen(b[i]);
    	for(j=0;j<r[i];j++)
		{
			b[i][l[i]-j-1]=b[i][r[i]-j-1];
		}
		for(j=0;j<l[i]-r[i];j++)
			b[i][j]='0';
		for(j=l[i]-1;j>=0;j--)
		{
			c[i][j]=a[i][j]-b[i][j];
			if(c[i][j]<0)
			{
				a[i][j-1]--;
				c[i][j]=c[i][j]+10;
			}
			c[i][j]=c[i][j]+48;
		}
	}
	for(i=0;i<n;i++)
		printf("%s\n",c[i]);
}