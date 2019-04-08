void main()
{
	int i,k,l;
	char g;
	char str[15],substr[4]={'1','1','1','\0'},te[15];
	scanf("%s",str);
	do
	{
		strcpy(te,str);
		g=getchar();
		for(i=0;i<3;i++)
			scanf("%c",&substr[i]);
		l=strlen(str);
		for(i=1,k=0;i<l;i++)
		{
			if(str[k]<str[i])
				k=i;
		}
		for(i=k+1;i<l;i++)
			str[i+3]=te[i];
		str[l+3]='\0';
		for(i=1;i<4;i++)
			str[k+i]=substr[i-1];
		puts(str);
	}
	while(scanf("%s",str)!=EOF);
}