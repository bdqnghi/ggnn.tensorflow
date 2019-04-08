int main()
{
	char words[2001];
	int start,end,max,min,i,len,zmax,zmin,maxstart,minstart;
	zmax=0;
	zmin=100;
	gets(words);
	len=strlen(words);
	for(i=0;i<len;i++)
	{
		while(words[i]==' ') i++;
		start=i;
		while(words[i]!='\0'&&words[i]!=' ') i++;
		end=i;
		max=end-start;
		min=end-start;
		if(max>zmax)
		{
			zmax=max;
			maxstart=start;
		}
		if(min<zmin)
		{
			zmin=min;
			minstart=start;
		}
	}
	while(words[maxstart]!='\0'&&words[maxstart]!=' ')
	{
		printf("%c",words[maxstart]);
		maxstart++;
	}
	printf("\n");
	while(words[minstart]!='\0'&&words[minstart]!=' ')
	{
		printf("%c",words[minstart]);
		minstart++;
	}
	printf("\n");
	return 0;
}

