int main(int argc, char* argv[])
{
	char s[80],t[80];
	int i;
	gets(s);
	gets(t);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='a'&&s[i]<='z')
			s[i]=s[i]-32;
	}
	for(i=0;t[i]!='\0';i++)
	{
		if(t[i]>='a'&&t[i]<='z')
			t[i]=t[i]-32;
	}
	if(strcmp(s,t)>0)printf(">");
	else if(strcmp(s,t)<0)printf("<");
	else printf("=");
	return 0;
}

