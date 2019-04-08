/*
 * 70.cpp
 * ???
 *  Created on: 2012-9-16
 *      Author: Salforever
 */



int main(void)
{
	int A, B, C;
	int As, Bs, Cs;
	int AnsA, AnsB, AnsC;									//????
	for (A=1; A<=3; A++)
		for (B=1; B<=3; B++)
			for (C=1; C<=3; C++)								//????
			{
				As=(B>A)+(C==A);
				Bs=(A>B)+(A>C);
				Cs=(C>B)+(B>A);								//??????
				if ((A+As==3)&&(B+Bs==3)&&(C+Cs==3))	//????????
				{
					AnsA=A;
					AnsB=B;
					AnsC=C;
				}
			}
	if (AnsA<=AnsB && AnsB<=AnsC)
		cout << "ABC" << endl;
	if (AnsA<=AnsC && AnsC<=AnsB)
		cout << "ACB" << endl;
	if (AnsB<=AnsA && AnsA<=AnsC)
		cout << "BAC" << endl;
	if (AnsB<=AnsC && AnsC<=AnsA)
		cout << "BCA" << endl;
	if (AnsC<=AnsA && AnsA<=AnsB)
		cout << "CAB" << endl;
	if (AnsC<=AnsB && AnsB<=AnsA)
		cout << "CBA" << endl;								//????
	return 0;												//????
}
