// ?????

void main()
{
	void max(char str[],char sub[]);
	int i,j=0;
	char str[11],sub[4],t;
	do
	{
		if(j)
		{
			for(i=1;;i++)//????????????????
			{
				if((t=getchar())!=' ')
					str[i]=t;
				else
				{
					str[i]='\0';
					break;
				}
			}
		}
		else scanf("%s",str);
		scanf("%s\n",sub);
		max(str,sub);
		j++;
	}while((str[0]=getchar())!=EOF);
}//EOF?????????????????

void max(char str[],char sub[])
{
	int i,m=0,n;
	char r=str[0];
	n=strlen(str);
	for(i=1;i<=n-1;i++)
	{
		if(str[i]>r)
		{
			r=str[i];
			m=i;
		}
	}
	for(i=0;i<=m;i++)
		printf("%c",str[i]);
	for(i=m+1;i<=m+3;i++)
		printf("%c",sub[i-m-1]);
	for(i=m+4;i<n+3;i++)
		printf("%c",str[i-3]);
	printf("\n");
}
			




