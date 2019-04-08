int main()
{
	int As,Bs,Cs,A,B,C;
	char m[3];
	
	for ( A=0 ; A<3 ; A++ )
		for ( B=0 ; B<3 ; B++ )
			for ( C=0 ; C<3 ; C++ )
			{
				As=( B>A )+( C==A );
	            Bs=( A>B )+( A>C );
	            Cs=( C>B )+( B>A );
				if(As+A==2&&Bs+B==2&&Cs+C==2&&A!=B&&B!=C&&C!=A)
				{
					m[A]='A';
                    m[B]='B';
					m[C]='C';
				    cout<<m[0]<<m[1]<<m[2]<<endl;
				}
			}
	return 0;
}