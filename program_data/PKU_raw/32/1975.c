void main()
{
	int n,i,m,k,j,l;
	char str[1000][1000],stt[1000][1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",str[i]);
		scanf("%s",stt[i]);
	}
	for(i=0;i<n;i++)
	{
		m=strlen(str[i]);
		k=strlen(stt[i]);
		for(j=m-1;j>=m-k;j--)
		{
			if(str[i][j]>=stt[i][j+k-m])
				str[i][j]=str[i][j]-stt[i][j+k-m]+48;
			else
			{
				str[i][j]=str[i][j]-stt[i][j+k-m]+58;
				str[i][j-1]=str[i][j-1]-1;
				l=j-1;
				while(str[i][l]<48)
				{
					str[i][l]=str[i][l]+10;
					l=l-1;
					str[i][l]=str[i][l]-1;
				}
			}
		}
		printf("%s\n",str[i]);
	}
}