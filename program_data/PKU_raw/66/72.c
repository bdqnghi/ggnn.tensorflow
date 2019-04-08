int main(){
	int year,syear,month,date,last;
	int mon1[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int mon2[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	long days,a=0,b=0;
	scanf("%d %d %d",&year,&month,&date);
	int i=1,j=0,k=0,w=1;
	for(w=1;;w++){
		year=year-400;
		if(year<=0){
			syear=year+400;
			break;
		}
	}
	for(i=1;i<syear;i++){
		if((i%4==0&&i%100!=0)||i%400==0){
			a+=366;
		}
		else{
			a+=365;
		}
	}
	if((syear%4==0&&syear%100!=0)||syear%400==0){
		for(j=0;j<month;j++){
			b+=mon2[j];
		}
	}
	if(syear%400!=0&&(syear%4!=0||syear%100==0)){
		for(k=0;k<month;k++){
			b+=mon1[k];
		}
	}
	days=a+b+date;
	last=days%7;
	switch(last){
	case(1):printf("Mon.");break;
	case(2):printf("Tue.");break;
	case(3):printf("Wed.");break;		
	case(4):printf("Thu.");break;			
	case(5):printf("Fri.");break;
	case(6):printf("Sat.");break;
	case(0):printf("Sun.");break;
	}
	return 0;
}
