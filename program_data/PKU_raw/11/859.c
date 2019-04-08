
void main(){
	int isrunnian(int);
	int year,month,day,result=0;
	int i;
	scanf("%d",&year);
	scanf("%d",&month);
	scanf("%d",&day);
	for(i=1;i<month;i++){
		switch(i){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			result=result+31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			result=result+30;
			break;
		case 2:
			if(isrunnian(year)){
				result=result+29;
			}else{
				result=result+28;
			}
			break;
		}
	}
	result=result+day;
	printf("%d\n",result);
}

int isrunnian(int year){
	if(year%400==0){
		return 1;
	}else if(year%4==0&&year%100!=0){
		return 1;
	}else{
		return 0;
	}
}
