/*
 * ???.cpp
 *
 *  Created on: 2012-10-14
 *      Author: ??
 */

int main()
{
	int A,B,C,cc1,cc2,cc3;    //A,B,C????????????cc1,cc2,cc3????????
	for (A = 0;A <= 2;A ++){
		for (B = 0;B <= 2;B ++){
			if (B == A) continue;
			for (C = 0;C <= 2;C ++){
				if ((C == A) || (C == B))  continue;

				cc1 = (B > A) + (C == A);
				cc2 = (A > B) + (A > C);
				cc3 = (C > B) + (B > A);

				if ((A + cc1 == 2) && (B + cc2 == 2) && (C + cc3 == 2))
				{
                   if (A == 2 && B == 1 && C == 0)   cout <<"CBA" <<endl;
                   if (A == 2 && B == 0 && C == 1)   cout <<"BCA" <<endl;
                   if (A == 1 && B == 2 && C == 0)   cout <<"CAB" <<endl;
                   if (A == 1 && B == 0 && C == 2)   cout <<"BAC" <<endl;
                   if (A == 0 && B == 1 && C == 2)   cout <<"ABC" <<endl;
                   if (A == 0 && B == 2 && C == 1)   cout <<"ACB" <<endl;

				}
			}
		}
	}
	return 0;
}