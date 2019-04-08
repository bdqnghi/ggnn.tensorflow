//*******************
//*??:???      *
//*???????? *
//*???2013.11.8  *
//*******************
int main ()
{
	int a,b,c,d,e;
	for ( e = 1 ; e <= 35 ; e ++)
		if(e==1||e==4||e==5)
		for ( a = 1 ; a <= 5 ; a ++)
			if ( a!= e )
    			for (b = 1 ; b <= 5 ; b ++)
					if ( b!= e&& b != a )
	        			for ( c = 1 ; c <= 5 ; c ++)
							if ( c != e && c != a&& c != b )
		            			for ( d = 1 ;d<= 5 ; d ++)
									if ( d!=e && d != a && d!= b&& d != c)
										if ( ( (e== 1) + (b==2) + (a==5) + (c!=1) + (d==1) )== 2)
										{
											if ( a==1||a==2)
											{
												if ( (e==1) !=1 )
													break;
											}
											else if (e==1)
												break ;
											if ( b==1||b==2 )
											{
												if( (b==2)!=1 )
													break ;
											}
											else if ( b==2)
												break;
											if ( c==1||c==2 )
											{
												if ((a==5)!=1 )
													break ;
											}
											else if (a==5)
												break ;
											if  (d==1||d==2)
											{
												if ( (c!=1)!=1 )
													break ;
											}
											else if ( c!=1)
												break;
											if (e==1||e==2) 
											{
												if( (d==1)!=1 )
													break ;
											}
											else if ( d== 1)
												break ;
											cout <<a<< " " << b << " " << c<< " " << d << " "<<e <<endl ;

										}
	return 0 ;
}