void main()
{
	int a[100],i,l,c[26]={0},k,max,n,j;
	char b[100][26],d[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d %s",&a[i],b[i]);
	for(i=0;i<n;i++)
	{
		l=strlen(b[i]);
		for(j=0;j<l;j++)
		{
			if(b[i][j]=='A')
				c[0]++;
			else if(b[i][j]=='B')
				c[1]++;
			else if(b[i][j]=='C')
				c[2]++;
			else if(b[i][j]=='D')
				c[3]++;
			else if(b[i][j]=='E')
				c[4]++;
			else if(b[i][j]=='F')
				c[5]++;
			else if(b[i][j]=='G')
				c[6]++;
			else if(b[i][j]=='H')
				c[7]++;
			else if(b[i][j]=='I')
				c[8]++;
			else if(b[i][j]=='J')
				c[9]++;
			else if(b[i][j]=='K')
				c[10]++;
			else if(b[i][j]=='L')
				c[11]++;
			else if(b[i][j]=='M')
				c[12]++;
			else if(b[i][j]=='N')
				c[13]++;
			else if(b[i][j]=='O')
				c[14]++;
			else if(b[i][j]=='P')
				c[15]++;
			else if(b[i][j]=='Q')
				c[16]++;
			else if(b[i][j]=='R')
				c[17]++;
			else if(b[i][j]=='S')
				c[18]++;
			else if(b[i][j]=='T')
				c[19]++;
			else if(b[i][j]=='U')
				c[20]++;
			else if(b[i][j]=='V')
				c[21]++;
			else if(b[i][j]=='W')
				c[22]++;
			else if(b[i][j]=='X')
				c[23]++;
			else if(b[i][j]=='Y')
				c[24]++;
			else if(b[i][j]=='Z')
				c[25]++;
		}
	}
	max=c[0];
	for(i=0;i<26;i++)
		if(c[i]>=max)
		{
			max=c[i];
			k=i;
		}
	printf("%c\n",d[k]);
	printf("%d\n",c[k]);
	for(i=0;i<n;i++)
	{
		l=strlen(b[i]);
		for(j=0;j<l;j++)
		{
			if(b[i][j]==d[k])
				printf("%d\n",a[i]);
		}
	}
}