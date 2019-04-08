/*
 * 3.cpp
 *
 *  Created on: 2013-10-19
 *      Author: Administrator
 */

int main()
{
    int a,b,c;
    int A,B,C;
	for(a=1;a<=3;a++)
		for(b=1;b<=3;b++)
			for(c=1;c<=3;c++)
			{
				A=(b>a)+(a==c);
				B=(a>b)+(a>c);
				C=(c>b)+(b>a);

					if(A>B&&B>C&&a<b&&b<c)
					{
						cout<<"A"<<"B"<<"C"<<endl;
					}
					if(A>C&&C>B&&a<c&&c<b)
					{
					    cout<<"A"<<"C"<<"B"<<endl;

					}
					if(B>A&&A>C&&b<a&&a<c)
					{
					    cout<<"B"<<"A"<<"C"<<endl;

					}
					if(B>C&&C>A&&b<c&&c<a)
					{
					    cout<<"B"<<"C"<<"A"<<endl;

					}
					if(C>B&&B>A&&c<b&&b<a)
					{
				        cout<<"C"<<"B"<<"A"<<endl;
					}
					if(C>A&&A>B&&c<a&&a<b)
					{
						cout<<"C"<<"A"<<"B"<<endl;

					}

			}
	return 0;
}
