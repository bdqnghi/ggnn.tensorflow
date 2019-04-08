int main()
{
	char zfcx[1000][256],zfcy[100][256];
	int i=0,n,k,m;
	scanf("%d",&n);
	while(i<n)
	{
		scanf("%s",zfcx[i]);
		m=strlen(zfcx[i]);
		for(k=0;k<=m;k++)
		{
			if(zfcx[i][k]=='A')
			{
				zfcy[i][k]='T';
			}
			if(zfcx[i][k]=='T')
			{
				zfcy[i][k]='A';
			}
			if(zfcx[i][k]=='C')
			{
				zfcy[i][k]='G';
			}
			if(zfcx[i][k]=='G')
			{
				zfcy[i][k]='C';
			}
			if(zfcx[i][k]=='\0')
			{
				zfcy[i][k]='\0';
			}
		}
		printf("%s\n",zfcy[i]);
		i++;
	}
	return 0;
}
