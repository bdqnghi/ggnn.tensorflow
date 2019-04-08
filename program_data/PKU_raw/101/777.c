/*
 * ???.cpp
 *?????A,B,C???
 *  Created on: 2012-10-4
 *  Author:???
 */


int main()
{
	int A=2,B=1,C=0,a,b,c;//??????C<B<A
	a=(B>A)+(C==A);       //a??????
	b=(A>B)+(A>C);        //b??????
	c=(C>B)+(B>A);        //c??????
	if(a<b&&b<c)          //???
		cout<<"CBA"<<endl;//??
	else
		;
	A=2,C=1,B=0;          //ACB
	a=(B>A)+(C==A);
    b=(A>B)+(A>C);
    c=(C>B)+(B>A);
	if(a<c&&c<b)
		cout<<"BCA"<<endl;
	else
		;
	B=2,A=1,C=0;         //CAB
	a=(B>A)+(C==A);
	b=(A>B)+(A>C);
	c=(C>B)+(B>A);
	if(b<a&&a<c)
	cout<<"CAB"<<endl;
	else
		;
	B=2,C=1,A=0;         //ACB
	a=(B>A)+(C==A);
	b=(A>B)+(A>C);
	c=(C>B)+(B>A);
	if(b<c&&c<a)
    cout<<"ACB"<<endl;
	else
		;
	C=2,B=1,A=0;         //ABC
	a=(B>A)+(C==A);
	b=(A>B)+(A>C);
	c=(C>B)+(B>A);
	if(c<b&&b<a)
	cout<<"ABC"<<endl;
	else
		;
	C=2,A=1,B=0;         //BAC
	a=(B>A)+(C==A);
	b=(A>B)+(A>C);
	c=(C>B)+(B>A);
	if(c<a&&a<b)
	cout<<"BAC"<<endl;
	else
		;
	return 0;
	}
