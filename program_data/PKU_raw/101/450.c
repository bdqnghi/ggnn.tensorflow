/**
* @file homework.cpp
* @author ???
* @date 2011-10-12
* @description
* ??????: ???
*/
int main()
{
	int riceA, riceB, riceC, wordA, wordB, wordC;
	for (riceA=0;riceA<=2;riceA++)
		for (riceB=0;riceB<=2;riceB++)
			{if (riceB==riceA) continue;
			for (riceC=0;riceC<=2;riceC++)
				{if (riceC==riceA||riceC==riceB) continue;
					wordA=(riceB>riceA)+(riceC==riceA);
					wordB=(riceA>riceB)+(riceA>riceC);
					wordC=(riceC>riceB)+(riceB>riceA);
					if ((wordA+riceA==2)&&(wordB+riceB==2)&&(wordA+riceA==2)) 
						{
						if ((riceA<riceB)&&(riceA<riceC)&&(riceB<riceC)) cout<<"ABC";
						if ((riceA<riceB)&&(riceA<riceC)&&(riceB>riceC)) cout<<"ACB";
						if ((riceB<riceA)&&(riceB<riceC)&&(riceA<riceC)) cout<<"BAC";
						if ((riceB<riceA)&&(riceB<riceC)&&(riceA>riceC)) cout<<"BCA";
						if ((riceC<riceA)&&(riceC<riceB)&&(riceA<riceB)) cout<<"CAB";
						if ((riceC<riceA)&&(riceC<riceB)&&(riceA>riceB)) cout<<"CBA";
						}
				}	
			}
return 0;
}