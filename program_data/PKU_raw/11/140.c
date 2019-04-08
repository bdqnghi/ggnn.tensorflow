main(){
	int year,month,day;
	scanf("%d %d %d",&year,&month,&day);
	int i;
	
	if(year%4==0||year%100==0){
		if(month==1){
			i=day;
		}
		else if(month==2){
			i=(month-1)*31+day;
		}
		else{
			i=(month-1)*31+day-month/2-1;
		}
	}
	else{
		if(month==1){
			i=day;
		}
		else if(month==2){
			i=(month-1)*31+day;
		}
		else{
			i=(month-1)*31+day-month/2-1;
		}
	}
	
	printf("%d",i);






	return 0;
}