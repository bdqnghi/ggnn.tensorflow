/*
 * ranking air-conditioner.cpp
 *
 *  Created on: 2011-11-15
 *      Author: Administrator
 */
int main()
{
	int a,b,c,d,e;
	for(a=1;a<=5;a++)//??????????
		for(b=1;b<=5;b++)
			for(c=1;c<=5;c++)
				for(d=1;d<=5;d++)
					for(e=1;e<=5;e++)
					{
						if((a!=b)*(a!=c)*(a!=d)*(a!=e)==1)//????????
						if((b!=c)*(b!=d)*(b!=e)==1)
						if((c!=d)*(c!=e)==1)
						if((d!=e)==1)
						if((e!=2)+(e!=3)==2)//E?????????
						if((e==1)==(a<=2))//???????
						if((b<=2)==(b==2))
						if((c<=2)==(a==5))
						if((d<=2)==(c!=1))
						if((e<=2)==(d==1))
						{
							cout<<a<<" "<<b<<" "<<c<<" "<<d<<" ";//????
							cout<<e;
						}
					}
	return 0;
}
