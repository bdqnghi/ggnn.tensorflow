int main ()
{
	int a , b , c ;           //????a b c ????A B C????????? 
	int A , B , C ;           //????A B C ????A B C??????
	for ( A=0 ; A<3 ; A++)
	{
		for ( B=0 ; B<3 ; B++)
		{
			for ( C=0 ; C<3 ; C++)      //????ABC????? ???1 2 3 ????
			{
				if ( A != B && B != C && A != C)     //?A B C ???????? ?????
				{
					a = ( B > A ) + ( C == A ) ;
					b = ( A > B ) + ( A > C ) ;
					c = ( C > B ) + ( B > A ) ;
					if ( a != b && b != c && a != c)
						if ( (B>A)+(b>=a) == 1 && (A>C)+(a>=c) == 1 && (B>C)+(b>=c) == 1 )      //???????????????????
						{
							if ( A>B && B>C )  cout << "C" << "B" << "A" <<endl ;          //??????????ABC???
							else if ( A>C && C>B )  cout << "B" << "C" << "A" <<endl ;
							else if ( B>A && A>C )  cout << "C" << "A" << "B" <<endl ;
							else if ( B>C && C>A )  cout << "A" << "C" << "B" <<endl ;
							else if ( C>B && B>A )  cout << "A" << "B" << "C" <<endl ;
							else if ( C>A && A>B )  cout << "B" << "A" << "C" <<endl ;
						}
				}
			}
		}
	}
	return 0 ;
}