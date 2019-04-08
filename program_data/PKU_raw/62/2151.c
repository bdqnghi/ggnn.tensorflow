int main()
{
   int q,i=0,j=0,w;
   char s[1000],t[1000];
   cin.getline(s,999);
   while(s[i]!='\0')
   {
	if(s[i]!=' '||(s[i]==' '&&s[i-1]!=' '))
	{
		cout<<s[i];
	}
	i++;
		
	}
	
	cin>>q;
	return 0;
}
