int main()
{
     char ch[310]={0},zimu;
	int no[26]={0};
	int i,j,jishu=0;
	scanf("%s",ch);
	for(i=0;ch[i]!=0;i++)
	{
		for(j=0;j<26;j++)
		{
			if(ch[i]==(j+97))
				no[j]++;
		}
	}
	for(i=0;i<26;i++)
	{
		zimu=(char)(i+97);
		if(no[i]!=0)
		{
			printf("%c=%d\n",zimu,no[i]);
			jishu++;
		}

	}
	if(jishu==0)
		printf("No");
	return 0;
}

