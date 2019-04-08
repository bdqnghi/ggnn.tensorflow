
int main(int argc, char* argv[])
{
	int n,t;
	char s[50];
	scanf("%d",&n);
	for(t=0;t<n;t++)
	{
		scanf("%s",&s);
		int l;
		l=strlen(s);
		if((s[l-1]=='r'&&s[l-2]=='e')||(s[l-1]=='y'&&s[l-2]=='l'))
		{
			s[l-2]='\0';
		}
		if(s[l-1]=='g'&&s[l-2]=='n'&&s[l-3]=='i')
		{
			s[l-3]='\0';
		}
		printf("%s\n",s);
	}
	return 0;
}