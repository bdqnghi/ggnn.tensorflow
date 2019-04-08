/*
 * 5-6.cpp
 *
 *  Created on: 2011-11-5
 *      Author: 11095
 */

int main()
{
	int a,b,c,d,e;
	int aa,ab,ac,ad,ae;
	int s[6];
	for(a=1;a<=5;a++){
		for(b=1;b<=5;b++){
			if(b==a)continue;
			for(c=1;c<=5;c++){
				if(c==a||c==b)continue;
				for(d=1;d<=5;d++){
					if(d==a||d==b||d==c)continue;
					e=15-a-b-c-d;
					s[a]=(e==1);
					s[b]=(b==2);
					s[c]=(a==5);
					s[d]=(c!=1);
					s[e]=(d==1);
					if(s[1]+s[2]==2&&s[3]+s[4]+s[5]==0&&e!=2&&e!=3){
						aa=a;ab=b;ac=c;ad=d;ae=e;
					}
				}
			}
		}
	}
	cout<<aa<<" "<<ab<<" "<<ac<<" "<<ad<<" "<<ae<<endl;
	return 0;
}
