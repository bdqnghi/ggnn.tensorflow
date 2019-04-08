int i,Husband[50]={0};
int marry( char engage[] );
int main()
{
	int t;
	char engage[100],couple[100];
	cin>>engage;
	i=strlen( engage );
	for ( t=0 ; t<i ; t++ )
		couple[t]=engage[t];
	marry( engage );
	for ( t=1 ; t<i ; t++ )
	{
		if ( couple[t]!=couple[0] )
			cout<<Husband[t]<<" "<<t<<endl;
	}
    return 0;
}
int marry( char engage[] )
{
	int j,k;
	for ( j=1 ; j<i ; j++ )
	{
		if ( engage[j]!=engage[0]&&engage[j]!='X' )
		{
			k=j-1;
			while ( engage[k]=='X' )
				k--;
			if ( engage[k]==engage[0] )
			{
			    Husband[j]=k;
				engage[j]='X';
				engage[k]='X';
				if ( k==0 )
					return 0;
			}
		}
	}
	marry( engage );
}
