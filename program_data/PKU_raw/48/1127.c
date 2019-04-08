//**********************************
//*?????????.cpp          *
//*?  ?????                  *
//*?  ??2013.12.4               *
//**********************************
void judge(int m , int n ,int (*p)[9])
{
	int str[9][9] , i , j ;
	if ( n == 0 )           //??n??0??????n???????
		return ;
	memcpy(str,p,sizeof(str));             //?p???str??????????????
	for ( i = 0 ; i <= 8 ; i++ )
	{
		for ( j = 0 ; j <=8 ; j++ )
			if (str[i][j] != 0)
			{
				if ( i != 0 )           //???????????????p???
				{
					if ( j != 0 )
						p[i-1][j-1] += str[i][j] ;
					if ( j != 8 )
						p[i-1][j+1] += str[i][j] ;
					p[i-1][j] += str[i][j] ;
				}
				if ( i != 8 )
				{
					if ( j != 0 )
						p[i+1][j-1] += str[i][j] ;
					if ( j != 8 )
						p[i+1][j+1] += str[i][j] ;
					p[i+1][j] += str[i][j] ;
				}
				if ( j != 0 )
					p[i][j-1] += str[i][j] ;
				if ( j != 8 )
					p[i][j+1] += str[i][j] ;
				p[i][j] += str[i][j] ;
			}
	}
	judge(m,n-1,p);                //?????
}
void output(int (*p)[9])
{
	int i , j ;
	for ( i = 0 ; i <= 8 ; i++ )
	{
		for ( j = 0 ; j <= 8 ; j++ )
		{
			cout << p[i][j] ;
			if ( j != 8 )
				cout << " " ;
			else 
				cout << endl ;
		}
	}
}
int main ()
{
	int m , n ,p[9][9]={0};
	cin >> m >> n ;
	p[4][4]=m;
	judge(m,n,p);           //????
	output(p);              //????
	return 0 ;
}