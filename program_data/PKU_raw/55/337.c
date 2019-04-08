void main()
{
	char ch[300];
	int a,b;
	scanf("%d %s %d",&a,ch,&b);
	long k=0;
    int i;
	for(i=0;i<strlen(ch);i++)
	{
		if(ch[i]>='0'&&ch[i]<='9')
		{
			k=k*a+ch[i]-'0';
			continue;
		}
		if(ch[i]>='A'&&ch[i]<='Z')
		{
			k=k*a+ch[i]-'A'+10;
			continue;
		}
		if(ch[i]>='a'&&ch[i]<='z')
		{
			k=k*a+ch[i]-'a'+10;
			continue;
		}
	}
	int save[1000];
	i=0;
	if(k==0)
		printf("0");
	else
	{
	while(k>0)
	{
		save[i]=k%b;
		k=k/b;
		i++;
	}
	i--;
	while(i>=0)
	{
		if(save[i]<10)
			printf("%d",save[i]);
		else
			printf("%c",save[i]+55);
		i--;
	}
	}
}