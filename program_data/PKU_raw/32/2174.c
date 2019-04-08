void main()
{
	int n,m;
	int i=0,j=0;
	char a[100][100],b[100][100],c[100][100]={0};
	int len1,len2;
	scanf("%d",&n);
	for(m=0;m<n;m++)
	{
		scanf("%s %s",a[m],b[m]);
		len1=strlen(a[m]);
		len2=strlen(b[m]);
		for(i=len1-1,j=len2-1;i>=len1-len2,j>=0;i--,j--)
		{
			if(a[m][i]-b[m][j]>=0)
			{
				c[m][i]=a[m][i]-b[m][j]+'0';
			}
			else
			{
				a[m][i-1]=a[m][i-1]-'1'+'0';
				c[m][i]=a[m][i]-b[m][j]+'0'+10;
			}
		}
		for(i=len1-len2-1;i>=0;i--)
		{
			if(a[m][i]>=0)
			{
				c[m][i]=a[m][i];
			}
			else
			{
				a[m][i-1]=a[m][i-1]-'1'+'0';
				c[m][i]=a[m][i]+'0'+10;
			}

		}
	}		
	for(m=0;m<n;m++)
	{
		printf("%s\n",c[m]);
	}
}