int main()
{
	int i;
	char str1[100],str2[100];
	gets(str1);
	gets(str2);
	for(i=0; str1[i]!='\0' ;i++)
	{
		if(str1[i]>='a'  &&  str1[i]<='z')
			str1[i]=str1[i]-32;
	}
	for(i=0;str2[i]!='\0';i++)
	{
		if(str2[i]>='a'  &&  str2[i]<='z')
			str2[i]-=32;
	}
	//puts(str1);
	//puts(str2);
	for(i=0;str1[i]==str2[i] && str1[i]!='\0' && str2[i]!='\0';i++);
	if(str1[i]>str2[i])
		printf(">\n");
	else if(str1[i]<str2[i]) 
		printf("<\n");
	else
		printf("=");
	return 0;
}
