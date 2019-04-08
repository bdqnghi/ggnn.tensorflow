/*
 * Homework3.15CompareAppetite.cpp
 *
 *  Created on: 2013-10-28
 *      Author: JuiceHe
 */
int main()
{
	void sort(int,int,int);
	int A,B,C,a,b,c;//A,B,C?????a,b,c????????
	for(A=1;A<=3;A++)
		for(B=1;B<=3;B++)
			for(C=1;C<=3;C++)
	{a=(B>A)+(A==C);b=(A>B)+(A>C);c=(C>B)+(B>A);
	 if((a-b)*(A-B)<0&&(c-b)*(C-B)<0&&(a-c)*(A-C)<0)//???????????
			 {sort(A,B,C);break;}//???sort??????
	}

	return 0;
}

void sort(int x,int y,int z)//??????
{
	char M,X,Y,Z;
	X='A';Y='B';Z='C';
	if(y>x){M=Y;Y=X;X=M;}
	if(z>y)
	{if(z>x){M=Z;Z=Y;Y=X;X=M;}
	 else {M=Z;Z=Y;Y=M;}
	}
	cout<<Z<<Y<<X<<endl;//??????
}