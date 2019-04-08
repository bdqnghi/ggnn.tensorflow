/*
 * 3.cpp
 *
 *  Created on: 2011-1-9
 *      Author: jsgl
 */


int main(){
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int y1,y2,m1,m2,d1,d2;
	int numr=0;
	int i;
	cin>>y1>>m1>>d1;
	cin>>y2>>m2>>d2;
	for(i=y1;i<y2;i++)
		if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
			numr++;
	if((((y1%4==0&&y1%100!=0)||(y1%400==0))&&m1>2))
		numr--;
	int yd1=0,yd2=0;
	if((y2%4==0&&y2%100!=0)||(y2%400==0))
		month[1]++;
	for(i=0;i<m1-1;i++)
		yd1+=month[i];
	yd1+=d1;
	for(i=0;i<m2-1;i++)
		yd2+=month[i];
	yd2+=d2;
	cout<<365*(y2-y1)+numr+yd2-yd1<<endl;
	return 0;
}
