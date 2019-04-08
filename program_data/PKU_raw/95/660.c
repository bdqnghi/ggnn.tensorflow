void main()
{
	int i;
	char str1[80],str2[80];
	gets(str1);
	gets(str2);
	for(i=0;i<80;i++)
	{
		if(str1[i]<='Z'&&str1[i]>='A')
			str1[i]=str1[i]+32;
		else continue;
		if(str1[i]<='z'&&str1[i]>='a')
			str1[i]=str1[i];
		else continue;
	}
	for(i=0;i<80;i++)
	{
		if(str2[i]<='Z'&&str2[i]>='A')
			str2[i]=str2[i]+32;
		else continue;
		if(str2[i]<='z'&&str2[i]>='a')
			str2[i]=str2[i];
		else continue;
	}
	if(strcmp(str1,str2)>0)
		printf(">");
	if(strcmp(str1,str2)==0)
		printf("=");
	if(strcmp(str1,str2)<0)
		printf("<");
}