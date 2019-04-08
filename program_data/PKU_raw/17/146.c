int main()
{
	char words[101]={0};
	while(cin>>words)
	{
		cout<<words<<endl;
		int i=0,j=0;
		for(i=0;words[i]!=0;i++)
		{
			if(words[i]!='('&&words[i]!=')')
				words[i]=' ';
			if(words[i]==')')
			{
				for(j=i-1;j>=0;j--)
				{
					if(words[j]=='(')
					{
						words[j]=' ';
						words[i]=' ';
						break;
					}
				}
			}
		}
		for(i=0;words[i]!=0;i++)
		{
			if(words[i]=='(')
				words[i]='$';
			if(words[i]==')')
				words[i]='?';
		}
		cout<<words<<endl;
	}
	return 0;
}




