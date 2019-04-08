int main()
{
	char s[50][100]={'\0'};//????
	char a[100],b[100];
	int i,j;

	cin>>s[0];
	i=1;
	while(cin.peek()==' ')
	{
		cin>>s[i++];
	}
	cin>>a>>b;

	for(i=0;s[i][0]!='\0';i++)
	{
		if(strcmp(a,s[i])==0)
		{
			strcpy(s[i],b);
		}
	}

cout<<s[0];
	for(i=1;s[i][0]!='\0';i++)
	    cout<<" "<<s[i];

  
	return 0;
}
