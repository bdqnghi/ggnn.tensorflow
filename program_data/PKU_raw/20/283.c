void main()
{
	char a[100][100],b[100][100],s[100][100];
	int i=0,j=0,k,m,n,count,lon[100];
	gets(s[0]);
	lon[0]=strlen(s[0]);
	n=1;
	for(i=1;s[i-1][0]!='\0';i++)
	{
		gets(s[i]);
		lon[i]=strlen(s[i]);
		n++;
	}
	n--;
	for(i=0;i<n;i++)
	{
		k=0;
		for(j=1;s[i][j]!=32;j++)
		{
			
			if(s[i][j]>s[i][k])
				k=j;
		}
		for(j=0;j<=k;j++)
			printf("%c",s[i][j]);
		for(j=lon[i]-3;j<lon[i];j++)
			printf("%c",s[i][j]);
		for(j=k+1;s[i][j]!=32;j++)
			printf("%c",s[i][j]);
		printf("\n");
	}
}


	

