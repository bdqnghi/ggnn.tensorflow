int main()
{
	char str1[80],str2[80];
	int i,j;
	gets(str1);
	gets(str2);
	for(i=0;i<80&&str1[i]!='\0';i++)
		if(str1[i]>='A'&&str1[i]<='Z')
			str1[i]=str1[i]+32;
	for(i=0;i<80&&str2[i]!='\0';i++)
		if(str2[i]>='A'&&str2[i]<='Z')
			str2[i]=str2[i]+32;
	if(strcmp(str1,str2)>0)
		printf(">\n");
	else
		if(strcmp(str1,str2)<0)
			printf("<\n");
		else
			printf("=\n");
	return 0;
}

