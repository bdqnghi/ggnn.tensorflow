int main()
{
	char a[200];
	while(scanf("%s",a)!=EOF)
	{
		char al[200]={'\0'};
		int i;
	    for(i=0;a[i];i++)
		{
			if(a[i]=='(')
				al[i]='$';
			else if(a[i]==')')
				al[i]='?';
			else
				al[i]=' ';
	     }
		void func(char s[]);
	
	    func(al);
		puts(a);
	    puts(al);
		strcpy(a,"'\0'");
	}
	return 0;
}
void func(char s[])
{
	int i;
	int t1=0,t2=0;
	int n=strlen(s);
	for(i=0;i<strlen(s);i++)
	{
		while(!(s[i]=='$'||s[i]=='?')&&s[i]!='\0') 
			i++;
		t1=i;
		
		i=i+1;
		while(!(s[i]=='$'||s[i]=='?')&&s[i]!='\0')
		
				 i++;
		
		if(s[i]=='\0')
			break;
		t2=i;
		if(s[t1]=='$'&&s[t2]=='?')
			{
				s[t1]=' ';
				s[t2]=' ';
				i=-1;continue;
		   }
		i=t1;
	}
}
