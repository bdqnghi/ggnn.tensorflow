void main()
{
	int i,j,a,b=0,c=0;
	char str1[80],str2[80];
	gets(str1);
	printf("\n");
	gets(str2);
	a=strlen(str1);
	for(i=0;i<a;i++)
	{
		if(str1[i]>='A'&&str1[i]<='Z')
			str1[i]=str1[i]+32;
	}
	for(i=0;i<a;i++)
	{
		if(str2[i]>='A'&&str2[i]<='Z')
			str2[i]=str2[i]+32;
	}
	for(i=0;i<a;i++)
	{
		if(str1[i]>str2[i])
		{b++;break;}
		else if(str1[i]<str2[i])
		{c++;break;}
		else continue;
	}
	if(b==0&&c==0)
		printf("=\n");
	else if(b==0&&c!=0)
		printf("<\n");
	else printf(">\n");
}
