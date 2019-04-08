int main()
{
	while(1)
	{
		char str[101];
		int final[101]={0};
		cin.getline(str,101);
		if(str[0]=='\0') break;
		int i=0,p=0,q=0,k=0,flag=0;
		while(str[i]!='\0')
		{
			if(str[i]=='(') final[i]=1;
			if(str[i]==')') 
			{
				final[i]=2;
				for(int j=i;j>=0;j--)
				{
					if(final[j]==1)
					{
						final[i]=0;
						final[j]=0;
						break;
					}
				}
			}
			i++;
		}
		cout<<str<<endl;
		while(str[k]!='\0')
		{
			if(final[k]==1||final[k]==2) 
			{
				p=k;
				if(flag==0) 
				{
					q=k;
					flag=1;
				}
			}
			k++;
		}
		for(int j=q;j<=p;j++)
		{
			if(final[j]==1) cout<<'$';
			else if(final[j]==2) cout<<'?';
			else cout<<' ';
		}
		cout<<endl;
	}
	return 0;
}

		