

int main()
{
   	int a,b,num=0;
	char c1[100],c2[100];
	cin>>a>>c1>>b;
	if( c1[0]=='0' )
	{
		cout<<0;
	}
	for( int i=0 ; i<strlen(c1) ; i++ )
	{
		if( c1[i]>='a' && c1[i]<='z' )
		{
			c1[i]=c1[i]-'a'+10;
		}
		else if( c1[i]>='A' && c1[i]<='Z' )
		{
			c1[i]=c1[i]-'A'+10;
		}
		else if( c1[i]>='0' && c1[i]<='9' )
		{
			c1[i]-='0';
		}
		num=a*num+c1[i];
	}
//	cout<<num<<endl;
	int i=0;
	while( num>0 )
	{
		c2[i]=num%b;
		num=num/b;
		if( c2[i]<=9 )
		{
			c2[i]+='0';
		}
		else if( c2[i]>=10 )
		{
			c2[i]+='A'-10;
		}
		i++;
	}
	c2[i]='\0';
	for( int i=strlen(c2)-1 ; i>=0 ; i-- )
	{
		cout<<c2[i];
	}
}