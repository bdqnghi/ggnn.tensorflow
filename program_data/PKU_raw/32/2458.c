void main()
{
	char a[100][102],b[100][102],c[100][102];
	int n,i,j,m,k,l;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		scanf("%s",b[i]);
		k=strlen(a[i]);
		m=strlen(b[i]);
		for(j=k-1;j>=k-m;j--)
		{
			if(a[i][j]<b[i][j+m-k]) 
			{
				c[i][j]=a[i][j]+58-b[i][j+m-k];
				a[i][j-1]--;
			}
			else c[i][j]=a[i][j]+48-b[i][j+m-k];
		}
		for(j=0;j<k-m;j++)
		{
			if(a[i][j]>='0') c[i][j]=a[i][j];
			else c[i][j]=a[i][j]+10;
		}
		c[i][k]='\0';
		for(j=0;j<k;j++)
		{
			if(c[i][j]!='0') break;
		}
		if(a[i][0]=='0')
		{
			for(j=0;j<k;j++) c[i][j]=c[i][j+1];
		}
	}
	for(i=0;i<n;i++) puts(c[i]);
}