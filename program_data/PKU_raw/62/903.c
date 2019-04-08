int main()
{
char s[200];
cin.get(s,200);
int n=strlen(s);

for(int i=0;i<n;i++)
{
	if(s[i]==' '&&s[i+1]==' ')
	{
	s[i]='\0';
	}
}
for(int i=0;i<n;i++)
{
	if(s[i]==0)continue;
	cout<<s[i];
}



return 0;
}