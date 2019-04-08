/*
 * 5-6.cpp
 *
 *  Created on: 2011-11-5
 *      Author: 11095
 */

int main()
{
	int a,b,c,d,e;
	int as,bs,cs,ds,es;
	int ha,hb,hc,hd,he;
	int aa,ab,ac,ad,ae;
	for(a=1;a<=5;a++){
		for(b=1;b<=5;b++){
			if(b==a)continue;
			for(c=1;c<=5;c++){
				if(c==a||c==b)continue;
				for(d=1;d<=5;d++){
					if(d==a||d==b||d==c)continue;
					e=15-a-b-c-d;
					as=(e==1);
					bs=(b==2);
					cs=(a==5);
					ds=(c!=1);
					es=(d==1);
					ha=a+as;
					hb=b+bs;
					hc=c+cs;
					hd=d+ds;
					he=e+es;
					if(ha*hb*hc*hd*he==360&&as+bs+cs+ds+es==2&&e!=2&&e!=3){
						aa=a;ab=b;ac=c;ad=d;ae=e;
					}
				}
			}
		}
	}
	cout<<aa<<" "<<ab<<" "<<ac<<" "<<ad<<" "<<ae<<endl;
}
