
char s1[101],s2[101];
int f(int);

int main()
{
	while (scanf("%s",s1)!=EOF)
	{
		f(0);
		cout<<s1<<endl<<s2<<endl;
	}
	return 0;
}

int f(int k)
{
	if(s1[k]=='\0') {s2[k]='\0';return 0;}

	if(s1[k]==')')
	{ s2[k]='?';f(k+1);return 0; }

	if(s1[k]=='(')
	{
		for(int i=k+1;i>0;i++)
		{
			if(s1[i]=='\0')
			{s2[i]='\0';i=-1;}

			else if(s1[i]=='(')
			{ i=f(i); }

			else if(s1[i]==')')
			{ s2[k]=' ';s2[i]=' ';f(i+1);return i; }

			else { s2[i]=' '; }
		}
		s2[k]='$';
		return -1;
	}

	s2[k]=' ';f(k+1);
	return 0;
}