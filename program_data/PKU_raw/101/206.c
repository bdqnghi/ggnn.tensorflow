/**
* @file 1000012800_1.cpp
* @author ??
* @date 2010-11-18
* @description
* ??????:????
*/


int main()
{
	char A, B, C;
	
	char rank[4];
	for (A = 1; A <= 3; A ++)
	
		for(B = 1; B <= 3; B ++)
		{
			if (A == B)
				continue;
		
			for (C = 1; C <= 3; C ++)
			{

				int a[4] = {0};
				if (A == C || B == C)
					continue;
				rank[A] = 'A';
				rank[B] = 'B';
				rank[C] = 'C';
				if(B < A)
					a[A] ++;
				if (C == A)
					a[A] ++;
				if(A < B)
					a[B] ++;
				if(A < C)
					a[B] ++;
				if(C < B)
					a[C] ++;
				if(B < A)
					a[C] ++;
				if(a[1] < a[2] && a[2] < a[3])
				{
					cout << rank[3] << rank[2] << rank[1] << endl;
				}
			}
		}
		return 0;
}

