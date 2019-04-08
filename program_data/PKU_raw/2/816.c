void main()
{
	int m,i,j,temp,max;
	char a[1000][10],b[1000][20],w;
	int c[26];
	scanf("%d",&m);
	for(i=0;i<26;i++)   c[i]=0;
	for(i=0;i<m;i++)
	{
		scanf("%s %s",a[i],b[i]);
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<strlen(b[i]);j++)
		{
			if(b[i][j]=='A')    c[0]++;
			if(b[i][j]=='B')    c[1]++;
			if(b[i][j]=='C')    c[2]++;
			if(b[i][j]=='D')    c[3]++;
			if(b[i][j]=='E')    c[4]++;
			if(b[i][j]=='F')    c[5]++;
			if(b[i][j]=='G')    c[6]++;
			if(b[i][j]=='H')    c[7]++;
			if(b[i][j]=='I')    c[8]++;
			if(b[i][j]=='J')    c[9]++;
			if(b[i][j]=='K')    c[10]++;
			if(b[i][j]=='L')    c[11]++;
			if(b[i][j]=='M')    c[12]++;
			if(b[i][j]=='N')    c[13]++;
			if(b[i][j]=='O')    c[14]++;
			if(b[i][j]=='P')    c[15]++;
			if(b[i][j]=='Q')    c[16]++;
			if(b[i][j]=='R')    c[17]++;
			if(b[i][j]=='S')    c[18]++;
			if(b[i][j]=='T')    c[19]++;
			if(b[i][j]=='U')    c[20]++;
			if(b[i][j]=='V')    c[21]++;
			if(b[i][j]=='W')    c[22]++;
			if(b[i][j]=='X')    c[23]++;
			if(b[i][j]=='Y')    c[24]++;
			if(b[i][j]=='Z')    c[25]++;
		}
	}

	for(i=0;i<26;i++)
	{	temp=0;
		for(j=0;j<26;j++)
		{
			if(c[i]>=c[j])
			{
				temp++;
			}
		}
		if(temp==26)  {max=i;break;}
	}
	w='A'+i;
	printf("%c\n",w);
	printf("%d\n",c[i]);
	for(i=0;i<m;i++)
	{	
		for(j=0;j<strlen(b[i]);j++)
		{
			if(b[i][j]==w)   {printf("%s\n",a[i]);break;}
		}
	}

}