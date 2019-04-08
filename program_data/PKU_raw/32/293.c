void main()
{
	int i=0,j=0,n=0;
	char a[100][205],b[100][205];
	int sa[100][205],sb[100][205];
	int len1,len2,flag=0;

	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s %s",a+i,b+i);
	
		for(i=0;i<n;i++)
		{
			len1=strlen(a[i]);
			for(j=0;j<len1;j++)
				sa[i][j]=a[i][len1-1-j]-'0';
		}
		for(i=0;i<n;i++)
		{
			len2=strlen(b[i]);
			for(j=0;j<len2;j++)
				sb[i][j]=b[i][len2-1-j]-'0';
		}

		for(i=0;i<n;i++)
		{
			len2=strlen(b[i]);
			for(j=0;j<len2;j++)
			{
				sa[i][j]-=sb[i][j];
				if(sa[i][j]<0)
				{
					sa[i][j]+=10;
					sa[i][j+1]-=1;
				}
			}
		}


		for(i=0;i<n;i++)
		{
			len1=strlen(a[i]);
			for(j=len1-1;j>=0;j--)
			{
				if(flag==0)
				{
					if(sa[i][j]!=0)
					{
						flag=1;
						printf("%d",sa[i][j]);
					}
				}
				else printf("%d",sa[i][j]);
			}
			printf("\n");flag=0;
		}
	
}