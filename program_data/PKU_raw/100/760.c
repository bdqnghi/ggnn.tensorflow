int main()
{
	char zfc[300],j;
	int l,i,s[26]={0};
	scanf("%s",zfc);
	l=strlen(zfc);
	for(i=0;i<l;i++)
	{
		for (j=97;(int)j<=122;(int)j++)
		{
			if(zfc[i]==(char)j)
				s[(int)j-97]++;
		}
	}
	int a=0;
	for(i=0;i<26;i++)
	{
		if(s[i]!=0)
		{
			printf("%c=%d\n",(char)(i+97),s[i]);
			a=1;
		}
	}
	if (a==0)
		printf("No");
	return 0;
}
