/*
 * Homework3.15CompareAppetite.cpp
 *
 *  Created on: 2013-10-28
 *      Author: JuiceHe
 */
int main()
{
	void sort(int,int,int);
	int A,B,C,a,b,c,i;//A,B,C?????a,b,c????????
	for(A=1;A<=3;A++)
		for(B=1;B<=3;B++)
			for(C=1;C<=3;C++)
	{a=(B>A)+(A==C);b=(A>B)+(A>C);c=(C>B)+(B>A);
	 if((a-b)*(A-B)<0&&(c-b)*(C-B)<0&&(a-c)*(A-C)<0)//???????????
	 for(i=1;i<=3;i++)//????????????
	 {if(A==i)cout<<"A";
	  if(B==i)cout<<"B";
	  if(C==i)cout<<"C";}}

	return 0;
}
