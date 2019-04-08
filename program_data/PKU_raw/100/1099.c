



int main()
{
	char str[1024];
	scanf("%s",str);

	int count['z'-'a'+1];
	for(int j=0;j<'z'-'a'+1;j++)
		count[j] = 0;

	int len = strlen(str);
	for(int i=0;i<len;i++)
		if(str[i]>='a' && str[i]<='z')
			count[str[i]-'a']++;
	
	int totle = 0;
	for(char c='a';c<='z';c++)
	{
		if(count[c-'a']>0)
		{
			printf("%c=%d\n",c,count[c-'a']);
			totle ++;
		}
	}

	if(totle == 0)
		printf("No\n");

	return 0;
}