void main()
{
	char str1[80],str2[80];
	int len1,len2;
	gets(str1);
	gets(str2);
	len1=strlen(str1);
	len2=strlen(str2);
	void convert(char a[80],int length);
		convert(str1,len1);
	    convert(str2,len2);
	if (strcmp(str1,str2)>0)
		printf(">");
	else if (strcmp(str1,str2)<0)
		printf("<");
	else printf("=");
}

void convert(char a[80],int length)
{
	int i;
	for(i=0;i<length;i++)
	{
		if (a[i]>='A'&&a[i]<='Z')
	a[i]=a[i]+32;
	}
}