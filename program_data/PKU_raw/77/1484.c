


void function( char (*p)[101] , int num , int num1 , char a , char b )
{
	if( num1==num/2-1 )
	{
		cout<<0<<' '<<num-1<<endl;
	}
	else
	{
		for( int i=0 ; i<num ; i++ )
		{
			if( *(*p+i)==b )
			{
				for( int j=i-1 ; j>=0 ; j-- )
				{
					if( *(*p+j)==a )
					{
						cout<<j<<' '<<i<<endl;
						*(*p+i)=' ';
						*(*p+j)=' ';
						break;
					}
				}
				break;				
			}
		}
		function( p , num , num1+1 , a , b );
	}
}
int main()
{
	char c[2][101];
	char (*p)[101];
	char a,b;
	int num;
	cin>>c[0];
	a=c[0][0];
	b=c[0][strlen(c[0])-1];
	for( int i=0 ; i<strlen(c[0]) ; i++ )
	{
		c[1][i]=i;
	}
	p=c;
	num=strlen(c[0]);
	function( p , num , 0 , a , b );

}