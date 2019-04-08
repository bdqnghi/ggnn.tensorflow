int main()
{
	char str1[80],str2[80];
	int i,a=0;
	gets(str1);
	gets(str2);
	for(i=0;i<=79;i++)
	{
		if(str1[i]=='\0'&&str2[i]=='\0')
			break;
		if(str1[i]>=65&&str1[i]<=90)
			str1[i]=str1[i]+'a'-'A';
		if(str2[i]>=65&&str2[i]<=90)
			str2[i]=str2[i]+'a'-'A';
		if(str1[i]>str2[i])
		{
			a=1;break;
		}
		if(str1[i]<str2[i])
		{
			a=2;break;
		}
	}
	switch(a)
	{
	case 0: printf("=\n");break;
	case 1: printf(">\n");break;
	case 2: printf("<\n");break;
	}
	return 0;
}
