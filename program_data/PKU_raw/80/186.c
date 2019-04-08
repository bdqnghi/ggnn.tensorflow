int leap(int year);
int days(int year,int month,int day);
void main(){
	int y1,m1,d1,y2,m2,d2;
	int total=0,i;
	scanf("%d%d%d",&y1,&m1,&d1);
	scanf("%d%d%d",&y2,&m2,&d2);
	if(y1==y2)
		total=days(y2,m2,d2)-days(y1,m1,d1);
	else{
		
		if(leap(y1))
			total=366-days(y1,m1,d1);
		else{
			total=365-days(y1,m1,d1);
		}
		for(i=y1+1;i<y2;i++){
			if(leap(i))
				total+=366;
			else{
				total+=365;
			}
		}
		total+=days(y2,m2,d2);
	}
	printf("%d\n",total);
}


int leap(int year){
	if((year%4==0 && year%100!=0) || year%400==0)
		return 1;
	else{
		return 0;
	}
}

int days(int year,int month,int day){
	int i,days=0;      //???
	for(i=1;i<month;i++){
		if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
			days+=31;
		if(i==4 || i==6 || i==9 || i==11)
			days+=30;
		if(i==2){
			if(leap(year))
				days+=29;
			else{
				days+=28;
			}
		}
	}
	days+=day;
	return days;
}
