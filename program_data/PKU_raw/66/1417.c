int main(){
	int year,month,day;
	scanf("%d%d%d",&year,&month,&day);
	int a=1;
	do{
		a+=400;
	}
	while(year>=a);
	a=a-400;
	int ryear=0,sum=0;
	int i;
	for(i=a;i<year;i++){
		if((i%4==0)&&(i%100!=0)||(i%400==0)){
			ryear++;
		}
	}
	sum=sum+365*(year-a-ryear)+366*ryear;
	int m[13];
	m[0]=0;
	for(i=1;i<=7;i+=2){
		m[i]=31;
	}
	for(i=8;i<=12;i+=2){
		m[i]=31;
	}
	m[4]=30;
	m[6]=30;
	m[9]=30;
	m[11]=30;
	m[2]=28;
	if((year%4==0)&&(year%100!=0)||(year%400==0)){
		m[2]=29;
		for(i=0;i<month;i++){
			sum+=m[i];
		}
		sum+=day;
	}
	else{
		for(i=0;i<month;i++){
			sum+=m[i];
		}
		sum+=day;
	}
	sum=sum%7;
	if(sum==1){
		printf("Mon.");
	}
	if(sum==2){
		printf("Tue.");
	}
	if(sum==3){
		printf("Wed.");
	}
	if(sum==4){
		printf("Thu.");
	}
	if(sum==5){
		printf("Fri.");
	}
	if(sum==6){
		printf("Sat.");
	}
	if(sum==0){
		printf("Sun.");
	}
	return 0;
}

			

