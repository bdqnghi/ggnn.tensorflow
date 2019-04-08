int main( )
{
	char s[250][50]={0};
	int n,i,c;
	cin>>n;
	cin.get();
	for(i=0;i<n;i++)
	{
		cin>>*(s+i);
	}
	c=0;
	i=0;
	while(i<n)
	{
		if(c+strlen(*(s+i))+1>80)
		{
			cout<<endl;
			c=0;
		}
		else if(c+strlen(*(s+i))+1<=80&&c==0)
		{
			cout<<*(s+i);
			c+=strlen(*(s+i));
			i++;
		}
		else if(c+strlen(*(s+i))+1<=80)
		{
			cout<<" "<<*(s+i);
			c+=strlen(*(s+i))+1;
			i++;
		}

	}
		return 0;
}
