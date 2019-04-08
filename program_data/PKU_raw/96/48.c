void main()
{
	char n[100]={0},s[100]={0};
	int nn[100]={0},y=0,len,i;
	scanf("%s",n);
	len=strlen(n);
	for(i=0;i<len;i++)
	{
		nn[i]=n[i]-'0';
	}
	for(i=0;i<len;i++)
	{
		s[i]=nn[i]/13+'0';
		y=nn[i]%13;
		nn[i+1]=nn[i+1]+10*y;
	}
	if(s[0]=='0'&&s[1]==0||s[0]=='0'&&s[1]=='0'&&s[2]==0)
		printf("0");
	else
	{
		if(s[1]!='0')
		i=1;
		else
		i=2;
		for(;i<len;i++)
		{
			printf("%c",s[i]);
		}
	}
	printf("\n");
	printf("%d\n",y);
}