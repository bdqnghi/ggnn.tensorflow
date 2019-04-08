



int main()
{
	char c1[260],c2[260],c[260];
	cin>>c1>>c2;
	int len1=strlen(c1);
	int len2=strlen(c2);
	int len=len1+1;
	for( int i=0 ; i<260 ; i++ )
	{
		c[i]=0;
	}
	if( len2>len1 )
	{
		len=len2+1;
	}
	if( c1[0]=='0' && c2[0]=='0' && len1==1 && len2==1 )
	{
		cout<<"0"<<endl;
	}
	else
	{
		for( int i=len1-1 ; i>=0 ; i-- )
		{
			c1[i+len-len1]=c1[i];
		}
		for( int i=len-len1-1 ; i>=0 ; i-- )
		{
			c1[i]='0';
		}
		for( int i=len2-1 ; i>=0 ; i-- )
		{
			c2[i+len-len2]=c2[i];
		}
		for( int i=len-len2-1 ; i>=0 ; i-- )
		{
			c2[i]='0';
		}
		for( int i=len-1 ; i>=0 ; i-- )
		{
			c[i]+=c1[i]+c2[i]-'0';
			if( c[i]>'9' )
			{
				c[i]-=10;
				c[i-1]++;
			}
		}
		for( int i=0 ; ; i++ )
		{
			if( c[i]!='0' )
			{
				for( int j=i ; j<len ; j++ )
				{
					cout<<c[j];
				}
				break;
			}
		}
	}
}