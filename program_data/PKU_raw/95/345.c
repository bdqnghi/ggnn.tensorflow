int main()
{
	int i,count1,count2;
	char str1[80],str2[80];
	gets(str1);
	gets(str2);
	count1=strlen(str1);
	count2=strlen(str2);
	for(i=0;i<=count1;i++)
	{
		str1[i]=tolower(str1[i]);
	}
	for(i=0;i<=count2;i++)
	{
		str2[i]=tolower(str2[i]);
	}
	if(strcmp(str1,str2)<0)
		printf("<");
	else if(strcmp(str1,str2)>0)
		printf(">");
	else printf("=");

	return 0;

}

