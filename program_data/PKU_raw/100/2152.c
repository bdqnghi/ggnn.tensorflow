int main()
{
	int i,sum[30]={0},tot[30]={0},x=0;
	char zfc[305];
	scanf("%s",zfc);
	for(i=0;i<strlen(zfc);i++)
	{
		if(zfc[i]<='Z'&&zfc[i]>='A')
		{
			sum[zfc[i]-'A']++;
		}
	}
	for(i=0;i<26;i++)
	{
		if(sum[i]!=0)
		{
			printf("%c=%d\n",i+'A',sum[i]);
			x=1;
		}
	}
	for(i=0;i<strlen(zfc);i++)
	{
		if(zfc[i]<='z'&&zfc[i]>='a')
		{
			tot[zfc[i]-'a']++;
		}
	}
	for(i=0;i<26;i++)
	{
		if(tot[i]!=0)
		{
			printf("%c=%d\n",i+'a',tot[i]);
			x=1;
		}
	}
	if(x==0)
	{
		printf("No");
	}
	return 0;
}