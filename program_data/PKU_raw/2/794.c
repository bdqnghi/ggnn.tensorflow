void main()
{
	int n,a[1000],i,b[26]={0},m,j,max=0,k;
	char str[1000][30];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%s",&a[i],str[i]);
	}
	for(i=0;i<n;i++)
	{
		m=strlen(str[i]);
		for(j=0;j<m;j++)
		{
			if(str[i][j]=='A')
				b[0]++;
			if(str[i][j]=='B')
				b[1]++;
			if(str[i][j]=='C')
				b[2]++;
			if(str[i][j]=='D')
				b[3]++;
			if(str[i][j]=='E')
				b[4]++;
			if(str[i][j]=='F')
				b[5]++;
			if(str[i][j]=='G')
				b[6]++;
			if(str[i][j]=='H')
				b[7]++;
			if(str[i][j]=='I')
				b[8]++;
			if(str[i][j]=='J')
				b[9]++;
			if(str[i][j]=='K')
				b[10]++;
			if(str[i][j]=='L')
				b[11]++;
			if(str[i][j]=='M')
				b[12]++;
			if(str[i][j]=='N')
				b[13]++;
			if(str[i][j]=='O')
				b[14]++;
			if(str[i][j]=='P')
				b[15]++;
			if(str[i][j]=='Q')
				b[16]++;
			if(str[i][j]=='R')
				b[17]++;
			if(str[i][j]=='S')
				b[18]++;
			if(str[i][j]=='T')
				b[19]++;
			if(str[i][j]=='U')
				b[20]++;
			if(str[i][j]=='V')
				b[21]++;
			if(str[i][j]=='W')
				b[22]++;
			if(str[i][j]=='X')
				b[23]++;
			if(str[i][j]=='Y')
				b[24]++;
			if(str[i][j]=='Z')
				b[25]++;
		}
	}
	for(i=0;i<26;i++)
	{
		if(b[i]>max)
		{
			max=b[i];
			k=i;
		}
	}
	printf("%c\n%d\n",k+65,max);
	for(i=0;i<n;i++)
	{
		m=strlen(str[i]);
		for(j=0;j<m;j++)
		{
			if(str[i][j]==k+65)
				printf("%d\n",a[i]);
		}
	}
}


			



		

