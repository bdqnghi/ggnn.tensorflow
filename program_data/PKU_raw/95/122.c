int main(int argc, char* argv[])
{
	char s1[80];
	char s2[80];
	gets(s1);
	gets(s2);
	int i,p=0,q=0;
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]<='Z'&&s1[i]>='A')
			s1[i]=s1[i]+32;
	}
	for(i=0;s2[i]!='\0';i++)
	{
		if(s2[i]<='Z'&&s2[i]>='A')
			s2[i]=s2[i]+32;
	}
	for(i=0;s1[i]!='\0'&&s2[i]!='\0';i++)
	{
		if(s1[i]==s2[i])
			continue;
		if(s1[i]>s2[i])
		{
			printf(">");
			p=1;
			break;
			
		}
		if(s1[1]<s2[i])
		{
			printf("<");
			q=1;
			break;
			
		}
	}
	if(p==0&&q==0)
	{
		printf("=");
	}
	return 0;

}
