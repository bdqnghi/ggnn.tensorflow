
void main()
{
	char s1[80],s2[80];
	int i,j;
	gets(s1);gets(s2);
	for(i=0;i<80;i++)
	{
		if(s1[i]>'A'&&s1[i]<'Z')
			s1[i]=s1[i]+32;
	}
	for(j=0;j<80;j++)
	{
		if(s2[j]>'A'&&s2[j]<'Z')
			s2[j]=s2[j]+32;
	}
	if(strcmp(s1,s2)>0)
		printf(">\n");
	else if(strcmp(s1,s2)<0)
		printf("<\n");
	else
		printf("=\n");
}