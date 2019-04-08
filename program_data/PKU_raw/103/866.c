

int main()
{
	char c[1005];
	int num=0;
	cin>>c;
	
	for( int i=0 ; i<strlen(c) ; i++ )
	{
		if( c[i]<='z' &&c[i]>='a' )
		{
			c[i]=c[i]-'a'+'A';
		}
	}
	if( c[0]!= c[1] )
	{
		cout<<"("<<c[0]<<",1)";
	}
	else
	{
		num++;
	}
	for( int i=1 ; i<strlen(c) ; i++ )
	{
		num++;
		if( c[i]!= c[i+1] )
		{
			cout<<"("<<c[i]<<","<<num<<")";
			num=0;
		}
	}
}