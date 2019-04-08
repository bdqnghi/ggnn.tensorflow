/**
* @file 3.cpp
* @author ???
* @date 2011-10-15
* @description
* ??????: ??? 
*/
int main()
{
int eA, eB, eC, sA, sB, sC;
 // ????????????eA eB eC = 1, 2, 3?????
for(eA = 1; eA <= 3; eA++)
	for(eB = 1; eB <= 3; eB++)
		for(eC = 1; eC <= 3; eC++)
		{
		sA = (eB > eA) + (eC == eA);
		sB = (eA > eB) + (eA > eC);
		sC = (eC > eB) + (eB > eA);
		// ????????????????
                  if( sA + eA == 3 && sB + eB == 3 && sC + eC == 3
			&& eA != eB && eB != eC && eC != eA)
{ // ????
if(eA < eB && eB < eC) cout << "ABC" << endl;
if(eA < eC && eC < eB) cout << "ACB" << endl;
if(eB < eA && eA < eC) cout << "BAC" << endl;
if(eB < eC && eC < eA) cout << "BCA" << endl;
if(eC < eA && eA < eB) cout << "CAB" << endl;
if(eC < eB && eB < eA) cout << "CBA" << endl;
}
         }
return 0;
}