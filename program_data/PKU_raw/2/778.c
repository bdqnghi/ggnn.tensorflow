int main()
{
	int n;char name[1000][26];int num[1000];
	int i,j;char b[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%s",&num[i],name[i]);
	}
	int a[26]={0};char k;
	for(i=0;i<n;i++)
	{
		for(j=0;(k=name[i][j]!='\0');j++)
		{
			if(name[i][j]=='A')
				a[0]++;
			if(name[i][j]=='B')
				a[1]++;
			if(name[i][j]=='C')
				a[2]++;
			if(name[i][j]=='D')
				a[3]++;
			if(name[i][j]=='E')
				a[4]++;
			if(name[i][j]=='F')
				a[5]++;
			if(name[i][j]=='G')
				a[6]++;
			if(name[i][j]=='H')
				a[7]++;
			if(name[i][j]=='I')
				a[8]++;
			if(name[i][j]=='J')
				a[9]++;
			if(name[i][j]=='K')
				a[10]++;
			if(name[i][j]=='L')
				a[11]++;
			if(name[i][j]=='M')
				a[12]++;
			if(name[i][j]=='N')
				a[13]++;
			if(name[i][j]=='O')
				a[14]++;
			if(name[i][j]=='P')
				a[15]++;
			if(name[i][j]=='Q')
				a[16]++;
			if(name[i][j]=='R')
				a[17]++;
			if(name[i][j]=='S')
				a[18]++;
			if(name[i][j]=='T')
				a[19]++;
			if(name[i][j]=='U')
				a[20]++;
			if(name[i][j]=='V')
				a[21]++;
			if(name[i][j]=='W')
				a[22]++;
			if(name[i][j]=='X')
				a[23]++;
			if(name[i][j]=='Y')
				a[24]++;
			if(name[i][j]=='Z')
				a[25]++;
		}
	}
	int max=a[0];int o=0;
	for(i=0;i<26;i++)
	{
		if(a[i]>max)
		{max=a[i];o=i;}
	}
	printf("%c\n%d\n",b[o],a[o]);
	for(i=0;i<n;i++)
	{
		for(j=0;(k=name[i][j]!='\0');j++)
		{
			if(name[i][j]==b[o])
				printf("%d\n",num[i]);
		}

	}
	scanf("%d",&i);


	return 0;
}