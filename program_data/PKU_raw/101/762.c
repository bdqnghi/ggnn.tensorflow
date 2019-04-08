/*
 * 05.cpp
 *??? ???
 *  Created on: 2012-10-18
 *      Author: ???
 */
int main()
{
	int A,B,C,p,m,n;
	A=3;B=2;C=1;
		p=(A<B)+(A==C);
		m=(A>B)+(A>C);
		n=(C>B)+(B>A);
		if(p==0&&m==1&&n==2)cout<<"CBA"<<endl;
	A=3;B=1;C=2;
		p=(A<B)+(A==C);
		m=(A>B)+(A>C);
		n=(C>B)+(B>A);
		if(p==0&&m==2&&n==1)cout<<"BCA"<<endl;
	A=2;B=3;C=1;
		p=(A<B)+(A==C);
		m=(A>B)+(A>C);
		n=(C>B)+(B>A);
		if(p==1&&m==0&&n==2)cout<<"CAB"<<endl;
	A=1;B=3;C=2;
		p=(A<B)+(A==C);
		m=(A>B)+(A>C);
		n=(C>B)+(B>A);
		if(p==2&&m==0&&n==1)cout<<"ACB"<<endl;
	A=1;B=2;C=3;
		p=(A<B)+(A==C);
		m=(A>B)+(A>C);
		n=(C>B)+(B>A);
		if(p==2&&m==1&&n==0)cout<<"ABC"<<endl;
	A=2;B=1;C=3;
		p=(A<B)+(A==C);
		m=(A>B)+(A>C);
		n=(C>B)+(B>A);
		if(p==1&&m==2&&n==0)cout<<"BAC"<<endl;
	return 0;
}
