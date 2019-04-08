int main(){
	int year,month,date;
	int i,n=0,xq;
	scanf("%d%d%d",&year,&month,&date);
    year=year%400;
	if(year==0){
		year=400;
	}
	for(i=1;i<year;i++){
		if(i%4==0&&i%100!=0||i%400==0){
			n+=366;
		}else{
			n+=365;
		}
	}
	for(i=1;i<month;i++){
		if(i==1||i==3||i==5||i==7||i==8||i==10){
			n+=31;
		}else if(i==4||i==6||i==9||i==11){
			n+=30;
		}else{
			if(year%4==0&&year%100!=0||year%400==0){
				n+=29;
			}
			else{
				n+=28;
			}
		}
	}
	n+=date;
	xq=n%7;
	switch(xq){
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