int main() {
	int year,month,day,i,date=0,m[12]={3,0,3,2,3,2,3,3,2,3,2,3};
	scanf("%d%d%d",&year,&month,&day);
	year-=1;
	date=year+year/4-year/100+year/400;
	year+=1;
	if(year%4==0&&year%100!=0||year%400==0) {
		m[1]=1;
	}
	for(i=0;i<(month-1);i++) {
		date+=m[i];
	}
	date+=day;
	date=date%7;
	switch(date) {
		case 0:printf("Sun.");break;
		case 1:printf("Mon.");break;
		case 2:printf("Tue.");break;
		case 3:printf("Wed.");break;
		case 4:printf("Thu.");break;
		case 5:printf("Fri.");break;
		case 6:printf("Sat.");break;
	}
	return 0;
}