/*
 * GetNumbers.cpp
 *
 *  Created on: 2012-12-12
 *  Author: ??
 *  ???????
 */


int main()
{
	char a[40] ;
	int len = 0 ;
	cin.getline( a , sizeof(a) ) ;
	len = strlen(a) ;
	for( int i = 0 ; i < len ; i++ )
	{
		if( i == len - 1 ){                            //????
			if(*(a+i) >= '0' && *(a+i) <= '9')
			    cout << *(a+i) << endl ;
		}
		else{
			if( *(a+i) >= '0' && *(a+i) <= '9' )     //?????
		    {
		        if( *(a+i+1) >= '0' && *(a+i+1) <= '9' )    //????????
		        cout << *(a+i) ;
			    else  cout << *(a+i) << endl ;               //????????
		    }
		}
	}
	return 0 ;
}

