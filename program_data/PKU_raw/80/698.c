/*
 * 5.cpp
 *
 *  Created on: 2011-11-4
 *      Author: 11294
 */
int main(){
	int y1,m1,d1;
	int y2,m2,d2;
	cin>>y1>>m1>>d1>>y2>>m2>>d2;
	int i,j;
	int s;
	if(y1<y2){s=365*(y2-y1-1);
	for(i=y1+1;i<y2;i++){
		if((i%4==0&&i%100!=0)||(i%400==0)){
			s++;
		}
	}
	}
	else{s=0;}
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	if(y1==y2){
		for(j=m1;j<m2;j++){
			s=s+a[j];
		}
		if((y1%4==0&&y1%100!=0)||(y1%400==0)){
			if(m1<=2&&m2>2)s++;
		}
		s=s+d2-d1;
	}
	else{
		int left1;
		int passed2;
		left1=365;
		for(j=1;j<m1;j++){
			left1=left1-a[j];
		}
		left1=left1-d1;
		if((y1%4==0&&y1%100!=0)||(y1%400==0)){
			if(m1<=2)left1++;
		}
		passed2=0;
		for(j=1;j<m2;j++){
			passed2=passed2+a[j];
		}
		passed2=passed2+d2;
		if((y2%4==0&&y2%100!=0)||(y2%400==0)){
			if(2<m2)passed2++;
		}
		s=s+left1+passed2;
	}
	cout<<s<<endl;
	return 0;
}
