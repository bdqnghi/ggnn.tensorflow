void main()
{
	char a[100][100],b[100][100],c[100][100]={'\0'},enter;
	int i,j,k,n,m,len1,len2;
	scanf("%d",&n);
	scanf("%s%s",a[0],b[0]);
	for(i=1;i<n;i++)
	{
		scanf("%s%s",a[i],b[i]);
	}
	for(i=0;i<n;i++)
	{
		len1=strlen(a[i]);
		len2=strlen(b[i]);
		for(j=0;j<len1;j++)
			c[i][j]='0';
		for(j=0;j<len2;j++)
		{		
			c[i][j+len1-len2]=b[i][j];
		}
		for(j=len1-1;j>=0;j--)
		{
			if(c[i][j]<=a[i][j])a[i][j]=a[i][j]-c[i][j]+'0';
			else 
			{
				a[i][j]=a[i][j]-c[i][j]+'0'+10;
				a[i][j-1]--;
			}
		}
		printf("%s\n",a[i]);
	}
}
