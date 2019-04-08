// ??
// ????wayne
// ?????12.30


int main()
{
	char a[250],b[250];
	int a1[250],b1[250],c[250],i,j,n,k;
	cin>>n;
	
	for(k=0;k<n;k++)
	{
	for(i=0;i<250;i++)
	{
		a1[i]=0;
		b1[i]=0;
		c[i]=0;
	}
	cin.get();
	cin.getline(a,250);
	cin.getline(b,250);
	for(i=strlen(a)-1,j=0;i>=0;i--,j++)
		a1[j]=a[i]-'0';
	for(i=strlen(b)-1,j=0;i>=0;i--,j++)
		b1[j]=b[i]-'0';
	if(strlen(a)>strlen(b))
	{
		for(i=0;i<strlen(a);i++)
		{
			c[i]+=a1[i]-b1[i];
			if(c[i]<0)
			{
				c[i]=10+c[i];
				c[i+1]--;
			}
		}
		while(c[i]==0&&i>0)
			i--;
		for(;i>=0;i--)
			cout<<c[i];
		cout<<endl;
	}
	else if(strlen(a)<strlen(b))
	{
		for(i=0;i<strlen(b);i++)
		{
			c[i]+=b1[i]-a1[i];
			if(c[i]<0)
			{
				c[i]=10+c[i];
				c[i+1]--;
			}
		}
		while(c[i]==0&&i>0)
			i--;
		for(;i>=0;i--)
			cout<<c[i];
		cout<<endl;
	}
	else
	{
		for(i=strlen(a)-1;i>=0;i--)
		{
			if(a1[i]==b1[i])
				continue;
			else if(a1[i]>b1[i])
			{
				for(i=0;i<strlen(a);i++)
				{
					c[i]+=a1[i]-b1[i];
					if(c[i]<0)
					{
						c[i]=10+c[i];
						c[i+1]--;
					}
				}
				while(c[i]==0&&i>0)
					i--;
				for(;i>=0;i--)
					cout<<c[i];
				cout<<endl;
				break;
			}
			else
			{
				for(i=0;i<strlen(b);i++)
				{
					c[i]+=b1[i]-a1[i];
					if(c[i]<0)
					{
						c[i]=10+c[i];
						c[i+1]--;
					}
				}
				while(c[i]==0&&i>0)
					i--;
				for(;i>=0;i--)
					cout<<c[i];
				cout<<endl;
				break;
			}
		if(i==0)
			cout<<"0"<<endl;
		}
	}
	}
	return 0;
}

