int main()
{
	char *str1,*str2,*p;
	int i;
	str1=(char *)malloc(80*sizeof(char));
	str2=(char *)malloc(80*sizeof(char));
	gets(str1);
	gets(str2);
	p=str1;
	for(i=0;*(p+i)!='\0';i++)
	{
		if(*(p+i)>='A'&&*(p+i)<='Z')
		{
			*(p+i)+=32;
		}
	}
	p=str2;
	for(i=0;*(p+i)!='\0';i++)
	{
		if(*(p+i)>='A'&&*(p+i)<='Z')
		{
			*(p+i)+=32;
		}
	}
	if(strcmp(str1,str2)<0)
		printf("<");
	else if(strcmp(str1,str2)>0)
		printf(">");
	else if(strcmp(str1,str2)==0)
		printf("=");
	return 0;
}