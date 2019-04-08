void match( char child[] , int l )
{
	for ( int i = 0 ; i <= l ; i++ )
		if ( child[i] == child[0] )//if he is a boy
		{
			for ( int j = i + 1 ; j <= l ; j++ )
			{
				if ( child[j] == child[0] )//if the next one is a boy
					break ;
				else if ( child[j] != child[0] && child[j] != '\0' )//if the next one is a girl
				{
					child[i] = child[j] = '\0' ;//let them go
					cout << i << " " << j << endl ;//cout
					match ( child , l ) ;//once again
				}
			}
	}
	return ;
}
int main()
{
	char child[101] ;
	cin.getline( child ,101 ) ;
	match( child , strlen( child ) ) ;

	return 0 ;
}