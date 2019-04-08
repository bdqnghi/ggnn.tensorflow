int main(int argc, char* argv[])
{
	char s1[80];
	char s2[80];
	char s3[80];
	char s4[80];
	int i,j;
	gets(s1);
	gets(s2);
	for(i=0;s1[i]!='\0';i++)
	{
		if (s1[i]>='A'&&s1[i]<='Z')
			s3[i]=tolower(s1[i]);//???strlwr()?strupr()????????????
		else s3[i]=s1[i];
	}
	s3[i]='\0';//????????????????
	for(j=0;s2[j]!='\0';j++)
	{
		if (s2[j]>='A'&&s2[j]<='Z')
			s4[j]=tolower(s2[j]);
		else s4[j]=s2[j];
	}
	s4[i]='\0';//????????????????
	
	if (strcmp(s3,s4)>0)
		printf("%c\n",'>');
	if (strcmp(s3,s4)==0)
		printf("%c\n",'=');
	if (strcmp(s3,s4)<0)
		printf("%c\n",'<');
	return 0;
}

