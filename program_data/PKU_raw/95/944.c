void main()
{
	char ch1[100],ch2[100];
	gets(ch1);
	int L1=strlen(ch1);
	gets(ch2);
	int L2=strlen(ch2);
	int i;
	for(i=0;i<L1;i++)
	{
		if(ch1[i]<='Z'&&ch1[i]>='A')
			ch1[i]=ch1[i]-'A'+'a';
	}
	for(i=0;i<L2;i++)
	{
		if(ch2[i]<='Z'&&ch2[i]>='A')
			ch2[i]=ch2[i]-'A'+'a';
	}

	int judge=strcmp(ch1,ch2);
	if(judge<0)
		printf("<");
	else if(judge>0)
		printf(">");
	else if(judge==0)
		printf("=");
}


