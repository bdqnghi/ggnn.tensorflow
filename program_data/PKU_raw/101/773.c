/*
 * ???.cpp
 *  Created on: 2012-10-19
 *      Author: ???  1200012899
 */
int main()
{
	int a,b,c,A,B,C,CC1,CC2,CC3;
	for(a=1;a<=3;a++)
	{
		for(b=1;b<=3;b++)
		{
			for(c=1;c<=3;c++)
			{
				A=(b>a)+(a==c);//A???
				B=(a>b)+(a>c);//B???
				C=(c>b)+(b>a);//C???
				CC1=(A>B&&a<b)||(A<B&&a>b);//A?B????????????
				CC2=(A>C&&a<c)||(A<C&&a>c);//A?C????????????
				CC3=(B>C&&b<c)||(B<C&&b>c);//C?B????????????
				if(CC1&&CC2&&CC3)
				{
					//cout<<a<<b<<c;
					if(a>b&&b>c)
						cout<<"C"<<"B"<<"A"<<endl;
					else if(a>b&&a>c&&c>b)
						cout<<"B"<<"C"<<"A"<<endl;
					else if(b>a&&a>c)
						cout<<"C"<<"A"<<"B"<<endl;
					else if(b>a&&c>a&&b>c)
						cout<<"A"<<"C"<<"B"<<endl;
					else if(c>b&&b>a)
						cout<<"A"<<"B"<<"C"<<endl;
					else if(c>b&&a>b&&c>a)
						cout<<"B"<<"A"<<"C"<<endl;}//???????????????
                }
		}
    }
	return 0;
}
