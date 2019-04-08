int main()
{
	char s[80],q[80];
	int i;
	gets(s);
	gets(q);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
		{
			s[i]-='A'-'a';
		}
	}
	for(i=0;q[i]!='\0';i++)
	{
		if(q[i]>='A'&&q[i]<='Z')
		{
			q[i]-='A'-'a';
		}
	}


	if(strcmp(s,q)==0)
		printf("=");
	if(strcmp(s,q)<0)
		printf("<");
	if(strcmp(s,q)>0)
		printf(">");
	
	return 0;

	
}
