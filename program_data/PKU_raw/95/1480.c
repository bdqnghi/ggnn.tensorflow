int main()
{
	int i,k1,k2;
	char str1[80],str2[80];
	gets(str1);
	k1=strlen(str1);
	gets(str2);
	k2=strlen(str2);
	for(i=0;i<k1;i++)
	{
		if(str1[i]>='A'&&str1[i]<='Z')
		{
			str1[i]=str1[i]+32;
		}
	}
	for(i=0;i<k2;i++)
	{
		if(str2[i]>='A'&&str2[i]<='Z')
			str2[i]=str2[i]+32;
	}
	i=0;
	while((str1[i]==str2[i])&&(str1[i]!='\0'))
		i++;
	if(str1[i]=='\0'&&str2[i]=='\0')
		printf("=");
	else if(str1[i]>str2[i])
		printf(">");
	else printf("<");
	return 0;
}