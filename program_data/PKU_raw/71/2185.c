int main(){
	int n,year,month1,month2,i,day1,day2;
	int isRunNian(int year);
	int DiJiTian(int year, int month);
	int sz[200],jg;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d %d",&year,&month1,&month2);
		if((DiJiTian(year,month2)-DiJiTian(year,month1))<0){
			jg=-(DiJiTian(year,month2)-DiJiTian(year,month1));
		}
		else jg=(DiJiTian(year,month2)-DiJiTian(year,month1));
		if(jg%7==0){
			sz[i]=1;
		}
		else{
			sz[i]=0;
		}
	}
	for(i=0;i<n;i++){
		if(sz[i]==1){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}
int isRunNian(int year){
	int result;
	if(year%400 == 0 ||(year%4==0 && year%100!=0)){
		result = 1;
	} else{
		result = 0;
	}
      return result;	
}
int DiJiTian(int year, int month){
	int result = 0;
	for(int i = 1; i < month; i++){ 
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			result += 31;	
		} else if (i == 4 || i ==6 || i == 9 || i==11){
			result += 30;
		} else if(i == 2){
			if(isRunNian(year)){
				result += 29;
			} else {
				result += 28;
			}	
		}
	}
	
	return result;	
}