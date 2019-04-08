int main()
{
	int a,i,len,N=0,b,o[100];
	char n[100],p[100];
	cin>>a>>n>>b;
	if(a<2||b>=36)
	{
		cout<<"...";
		return 0;
	}
	len=strlen(n);
	for(i=0;i<len;i++) 
	{
		if(n[i]>='0'&&n[i]<='9') 
		{
			if(n[i]<a+'0')
			{
				N=N*a+n[i]-'0';
			}
			else
			{
				cout<<"...";
				return 0;
			}
		}
		else
		{
			if(n[i]>='a'&&n[i]<='z') 
			{
				if(n[i]<a+'a'-10)
				{
					N=N*a+n[i]-'a'+10;
				}
				else
				{
					cout<<"...";
					return 0;
				}
			}
			else
			{
				if(n[i]<a+'A'-10) 
				{
					N=N*a+n[i]-'A'+10;
				}
				else
				{
					cout<<"...";
					return 0;
				}
			}
		
		}
	}
	i=0; 
	if(N==0)
	{
		cout<<"0";
		return 0;
	}
	while(N>0)
	{
		o[i]=N%b;
		if(o[i]>=10)
		{
			p[i]='A'+o[i]-10;
		}
		else
		{
			p[i]=o[i]+'0';
		}
		i++;
		N=N/b; 
	}
	i--;
	for(;i>=0;i--)
	{
		cout<<p[i];
	}
	cout<<endl;
	return 0;
}
