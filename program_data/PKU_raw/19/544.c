void main()
{
	char s[101],s1[101],s2[101],s4[101];
	gets(s);
	gets(s1);
	gets(s2);
	char s3[100][101];
	char *p;
	char (*p3)[101];
	int n,i;
	n=strlen(s);
	p=s;
	p3=s3;
	i=0;
	for(p=s;p<=(s+n);p++)
	{
		if((*p==' ')||(*p=='\0'))
		{
			*((*p3)+i)='\0';
			p3++;
			i=0;
		}
		else
		{
			*((*p3)+i)=*p;
			i++;
		}
	}
	*((*p3))='\0';
	for(p3=s3;*((*p3))!='\0';p3++)
	{
		if(strcmp(*p3,s1)==0)
		{
			strcpy(*p3,s2);
		}
	}
	p3=s3;
	strcpy(s4,*p3);
	for(p3=s3+1;*((*p3))!='\0';p3++)
	{
		strcat(s4," ");
		strcat(s4,*p3);
	}
	puts(s4);
}