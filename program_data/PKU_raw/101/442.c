int main ()
{
	int A, B, C, k;
	int ans, bns, cns;
	k =0;
	for( A =1; A < 4; A ++ )
	{
		for( B = 1; B < 4; B ++)
		{
			for( C = 1; C < 4; C ++ )
			{
				ans = (B > A) + ( C == A);
				bns = (A > B) + ( A > C );
				cns = (C > B) + ( B > A );
					
				if((A >= B && ans >= bns) || (A >= C && ans >= cns)
					||( B >= C && bns >= cns )|| (A <= B && ans <= bns) || (A <= C && ans <= cns)||( B <= C && bns <= cns ))
					continue;
				else
				{
					k = 1;
				if( A <= B && B <= C)
					cout << "ABC" << endl;
				else if( A <= C && C <= B)
					cout << "ACB" << endl;
				else if(B <=A && A <= C)
					cout << "BAC" <<endl;
				else if(B <=C && C <= A)
					cout << "BCA" <<endl;
				else if(C <= A && A <= B)
					cout << "CAB" << endl;
				else 
					cout << "CBA" << endl;

				break;
				}
				if( k ==1 )
					break;
			}
               if( k ==1 )
					break;
		}
	             if( k ==1 )
					break;
	}			
			return 0;
}