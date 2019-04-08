void Replace(char s[],int x)
{
	for(int i=x+1;i<strlen(s);i++)
	{
	if(s[i]==')'){s[x]=s[i]=' ';return;}
	if(s[i]=='(')Replace(s,i);
	}
	s[x]='$';
}
void Find(char s[])
{
	for(int i=0;i<strlen(s);i++)
	{
if(s[i]=='$'||s[i]=='?')continue;
		if(s[i]=='(')Replace(s,i);
		else if(s[i]==')')s[i]='?';
		else {
			s[i]=' ';
		}
	}
	return;
}

int main()
{
	char live[101];//string live;
	while(cin>>live)
	{
		cout<<live<<endl;
		Find(live);
		cout<<live<<endl;
	}
	return 0;
}
