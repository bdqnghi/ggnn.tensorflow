
int main()
{
    int a, b, c, d, e;
    for( e=1; e<6; e++ )
    {
    	if( e==2 || e==3 )
    		continue;
    	for( a=1; a<6; a++ )
    	{
    		if( a==e )
    			continue;
    		for( b=1; b<6; b++ )
    		{
    			if( b==a || b==e )
    				continue;
    			for( c=1; c<6; c++ )
    			{
    				if( c==a || c==b || c==e )
    					continue;
    				for( d=1; d<6; d++ )
    				{
    					if( d==a || d==b || d==c || d==e )
    						continue;
    					int a1, a2, a3, a4, a5;
    					a1=(e==1);
    					a2=(b==2);
    					a3=(a==5);
    					a4=(c!=1);
    					a5=(d==1);
    					int s=0;
    					for( int j=1; j<=2; j++)
    					{
    					if( a==j && a1==1)
    						s++;
    					if( b==j && a2==1)
    					    s++;
    					if( c==j && a3==1)
    					    s++;
    					if( d==j && a4==1)
    					    s++;
    					if( e==j && a5==1)
    					    s++;
    					}
    					for( int j=3; j<=5; j++)
    					{
    					    if( a==j && a1==0)
    					    	s++;
    					    if( b==j && a2==0)
    					    	s++;
    					    if( c==j && a3==0)
    					    	s++;
    					    if( d==j && a4==0)
    					    	s++;
    					    if( e==j && a5==0)
    					        s++;
    					}
    					if(s==5)
    					{
    						cout << a << " " << b << " " << c << " " << d << " " << e ;
    						return 0;
    					}
    				}
    			}
    		}
    	}
    }
}
