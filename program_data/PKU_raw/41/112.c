/*
 * test.cpp
 *
 *  Created on: 2011-11-6
 *      Author: b
 */

int main()
{
	int a,b,c,d,e;//?????????ABCDE???
	int p[6]={0,1,1,0,0,0};//?????????1-5??????
	for(a=1;a<=5;a++)//???
		for(b=1;b<=5;b++)
		{
			if(a==b) continue;
			for(c=1;c<=5;c++)
			{
				if(a==c||b==c) continue;
				for(d=1;d<=5;d++)
				{
					if(a==d||b==d||c==d) continue;
					for(e=1;e<=5;e++)
					{
						if(a==e||b==e||c==e||d==e) continue;
						if(((e==1&&p[a]==1)||(e!=1&&p[a]==0))//A????????
								&&((b==2)||(b!=2&&p[b]==0))//B????????
								&&((a==5&&p[c]==1)||(a!=5&&p[c]==0))//C????????
								&&((c!=1&&p[d]==1)||(c==1&&p[d]==0))//D????????
								&&((d==1&&e==2)||(d!=1&&p[e]==0))//E????????
								&&(e!=2&&e!=3))//E????????
						{
							cout<<a<<' ';//????
							cout<<b<<' ';
							cout<<c<<' ';
							cout<<d<<' ';
							cout<<e;
							a=b=c=d=e=6;
						}
					}
				}
			}
		}
	return 0;
}