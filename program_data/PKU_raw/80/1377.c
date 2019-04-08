int dijitian(int year,int month,int day);
int main()
{
	int year1,month1,day1,total=0,year2,month2,day2,result,n;
	scanf("%d%d%d%d%d%d",&year1,&month1,&day1,&year2,&month2,&day2);
	int i;
	if(year1==year2){
		result=dijitian(year2,month2,day2)-dijitian(year1,month1,day1);
	}else{
		for(i=year1+1;i<year2;i++){
			if((i%400==0)||((i%4==0)&&(i%100!=0))){
				total+=366;
			}else{
				total+=365;
			}
		}
		if((year1%400==0)||((year1%4==0)&&(year1%100!=0))){
			result=366-dijitian(year1,month1,day1)+dijitian(year2,month2,day2)+total;
		}else{
			result=365-dijitian(year1,month1,day1)+dijitian(year2,month2,day2)+total;
		}
	}
	printf("%d\n",result);
	return 0;
}
int dijitian(int year,int month,int day){
	int i;
	int total=0;
	for(i=1;i<month;i++){
		if((i==1)||(i==3)||(i==5)||(i==7)||(i==8)||(i==10)||(i==12)){
			total+=31;
		}else if((i==4)||(i==6)||(i==9)||(i==11)){
			total+=30;\
		}else if(i==2){
			if((year%400==0)||((year%4==0)&&(year%100!=0))){
				total+=29;
			}else{
				total+=28;
			}
		}
	}
	total+=day;
	return (total);
}
