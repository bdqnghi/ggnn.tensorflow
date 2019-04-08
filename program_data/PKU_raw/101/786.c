/*
 * shit.cpp
 *
 *  Created on: 2012-10-15
 *      Author: Administrator
 */


int main()
{
	int a,b,c,d,e,f;
	for(a=1;a<=3;a++)
		for(b=1;b<=3;b++)
			for(c=1;c<=3;c++)
				if(a!=b&&b!=c&&a!=c)
				{
					d=(b>a)+(c==a);
					e=(a>b)+(a>c);
					f=(c>b)+(b>a);
					if((a+d)==(b+e)&&(a+d)==(c+f)&&(b+e)==(c+f))
					{
						if(a>b&&b>c) cout<<"CBA";
						else if(a>c&&c>b) cout<<"BCA";
						else if(b>a&&a>c) cout<<"CAB";
						else if(b>c&&c>a) cout<<"ACB";
						else if(c>b&&b>a) cout<<"ABC";
						else if(c>a&&a>b) cout<<"BAC";
					}
				}
	return 0;
}
