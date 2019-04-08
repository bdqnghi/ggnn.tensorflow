/*
 * air.cpp
 *
 *  Created on: 2011-11-6
 *      Author: b
 */

int main(){
	int a,b,c,d,e,aa,bb,cc,dd,ee;    //????a,b,c,d,e??????aa,bb,cc,dd,ee
	for (a=1;a<=5;a++)
		for (b=1;b<=5;b++) if (b==a) continue;
		else for (c=1;c<=5;c++) if ((c==a)||(c==b)) continue;
		else for (d=1;d<=5;d++) if ((d==a)||(d==b)||(d==c)) continue;
		else {
			e=15-a-b-c-d;   //????????15
			aa=(e==1);
			bb=(b==2);
			cc=(a==5);
			dd=(c!=1);
			ee=(d==1);
			if ((e!=2)&&(e!=3)&&(a*aa+b*bb+c*cc+d*dd+e*ee==3)&&(aa+bb+cc+dd+ee==2)) //?????????????3?????????2????????????1,2
				cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<endl;
		}
	return 0;
}

