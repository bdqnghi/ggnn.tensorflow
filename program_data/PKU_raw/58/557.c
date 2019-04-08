int main()
{
	int n,i,j;char s[100][81];int g;
	cin>>n;
	cin.get();
	for(i=0;i<n;i++)
		gets(s[i]);
	for(i=0;i<n;i++)
	{
		g=0;
		for(j=0;j<strlen(s[i]);j++)
			{
	          if(s[i][0]=='_'
					||((s[i][0]>='A')&&(s[i][0]<='Z'))
					||((s[i][0]>='a')&&(s[i][0]<='z')))
				{  
					if(s[i][j]=='_'
					||((s[i][j]>='A')&&(s[i][j]<='Z'))
					||((s[i][j]>='a')&&(s[i][j]<='z'))||(s[i][j]>='0'&&s[i][j]<='9'))g++;
				}


				
			}
				if(g==strlen(s[i]))cout<<1<<endl;
				else cout<<0<<endl;
	}
     return 0;
}