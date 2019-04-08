/*
 * 01.cpp
 *
 *  Created on: 2011-11-6
 *      Author: ???
 */

int main()                          //?????
{
	int A,B,C,D,E,cc1,cc2,cc3,cc4,cc5;                  //????
	for(A=1;A<=5;A++)
		for(B=1;B<=5;B++)
		if(A!=B)
		{for(C=1;C<=5;C++)
			if(C!=A&&C!=B)
			{for(D=1;D<=5;D++)
				if(D!=A&&D!=B&&D!=C)
				{
					E=15-A-B-C-D;               //A?B,C,D,E????
					cc1=(E==1);
					cc2=(B==2);
					cc3=(A==5);
					cc4=(C!=1);
					cc5=(D==1);                //A?B?C?D?E????

					if(((A+cc1)*(B+cc2)*(C+cc3)*(D+cc4)*(E+cc5)==360)
							&&((A-cc1)*(B-cc2)*(C-cc3)*(D-cc4)*(E-cc5)==0)
							&&(cc1+cc2+cc3+cc4+cc5==2)&&((A-cc1)+(B-cc2)+(C-cc3)+(D-cc4)+(E-cc5)==13)&&(E!=2)&&(E!=3))
							//?????????????
					{
						cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E<<endl;
					}




				}
			}
		}
	return 0;
}
