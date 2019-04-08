/*
 * 3.15.cpp
 *
 *  Created on: 2013-10-17
 *      Author: st
 */
int main()
{
	int A=0,B=0,C=0;
	for(A=1;A<=3;A++)//3???
		for(B=1;B<=3;B++)
			for(C=1;C<=3;C++)
			{
				if(A>B&&B>C)//???????????????????????
					{if(((B>A)+(C==A))<((A>B)+(A>C))&&((A>B)+(A>C))<((C>B)+(B>A)))
						cout<<"CBA"<<endl;}
				else if(A>C&&C>B)
				    {if(((B>A)+(C==A))<((C>B)+(B>A))&&((C>B)+(B>A))<((A>B)+(A>C)))
				    	cout<<"BCA"<<endl;}
				else if(B>A&&A>C)
				    {if(((A>B)+(A>C))<((B>A)+(C==A))&&((B>A)+(C==A))<((C>B)+(B>A)))
					cout<<"CAB"<<endl;}
				else if(B>C&&C>A)
				    {if(((A>B)+(A>C))<((C>B)+(B>A))&&((C>B)+(B>A))<((B>A)+(C==A)))
					cout<<"ACB"<<endl;}
				else if(C>A&&A>B)
				    {if(((C>B)+(B>A))<((B>A)+(C==A))&&((B>A)+(C==A))<((A>B)+(A>C)))
				    	cout<<"BAC"<<endl;}
				else if(C>B&&B>A)
				    {if(((C>B)+(B>A))<((A>B)+(A>C))&&((A>B)+(A>C))<((B>A)+(C==A)))
					cout<<"ABC"<<endl;}
			}
	return 0;

}
