/*
 * 1.cpp
 *
 *  Created on: 2011-11-4
 *      Author: 11288
 */
int main(){
	int a[3001],i,y1,y2,m1,m2,d1,d2,s1=0,s2=0,j,m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},im[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	for(i=1;i<3001;i++){
		if((i%4==0&&i%100!=0)||i%400==0)
			a[i]=366;
		else a[i]=365;}
	cin>>y1>>m1>>d1>>y2>>m2>>d2;
	for(i=1;i<y1;i++)
		s1=s1+a[i];
	if((y1%4==0&&y1%100!=0)||y1%400==0)
		for(j=0;j<m1;j++)
		s1=s1+im[j];
	else for(j=0;j<m1;j++)
		s1=s1+m[j];
	s1=s1+d1;
	for(i=1;i<y2;i++)
		s2=s2+a[i];
	if((y2%4==0&&y2%100!=0)||y2%400==0)
		for(j=0;j<m2;j++)
		s2=s2+im[j];
	else for(j=0;j<m2;j++)
		s2=s2+m[j];
	s2=s2+d2;
	cout<<s2-s1<<endl;
	return 0;
}
