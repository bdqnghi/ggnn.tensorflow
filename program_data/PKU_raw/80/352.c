/*
 * 1000012730_2.cpp
 *
 *  Created on: 2011-1-9
 *      Author: jsgl
 */

int judge(int y){
	if((y % 4 == 0 && y % 100 != 0)||(y % 400 == 0))
		return 1;
	else return 0;
}

int same_year(int m1,int d1,int m2,int d2,int k){
	int day=0;
	int i;
	for(i=m1;i<m2;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
			day+=31;
		if(i==2)
			day+=28+k;
		if(i==4||i==6||i==9||i==11)
			day+=30;
	}
	day=day-d1+d2;
	return day;
}

int main(){
	int y1,y2,m1,m2,d1,d2;
	int i,j,k;
	int day=0;		//day???
	cin>>y1>>m1>>d1>>y2>>m2>>d2;
	if(y1==y2){
		k=judge(y1);
		day=day+same_year(m1,d1,m2,d2,k);}
	if(y1==y2-1)
	{
		k=judge(y1);
		day=day+same_year(m1,d1,12,31,k)+1;
		k=judge(y1);
		day=day+same_year(1,1,m2,d2,k);
	}
	if(y1<y2-1)
	{
		k=judge(y1);
		day=day+same_year(m1,d1,12,31,k)+1;
		k=judge(y2);
		day=day+same_year(1,1,m2,d2,k);
		for(i=y1+1;i<y2;i++)
		{
			k=judge(i);
			day+=365+k;
		}
	}
	cout<<day;
	return 0;
}
