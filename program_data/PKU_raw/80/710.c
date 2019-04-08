/*
 * days.cpp
 *
 *  Created on: 2011-11-4
 *      Author: 99004
 */

int main(){
	int startyear,startmonth,startday,endyear,endmonth,endday;
	int i,dy,add,days1=0,days2=0;
	long days;
	cin>>startyear>>startmonth>>startday;
	cin>>endyear>>endmonth>>endday;
	dy=(endyear-startyear>1?(endyear-startyear-1):0);
	add=0;
	for(i=startyear+1;i<endyear;i++){
		if((i%4==0&&i%100!=0)||(i%400==0)) add++;
	}
	if((startyear%4==0&&startyear%100!=0)||startyear%400==0) add++;
	if((endyear%4==0&&endyear%100!=0)||endyear%400==0) add++;
	int month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	if(startyear!=endyear){
	for(i=startmonth;i<13;i++) days1=days1+month[i];
	for(i=1;i<endmonth;i++) days2=days2+month[i];
	days=365*dy+add+days1+days2+(endday-startday);}
	else {
		for(i=startmonth;i<endmonth;i++) days1=days1+month[i];
		days=days1+endday-startday;
	}
	cout<<days<<endl;
	return 0;
}