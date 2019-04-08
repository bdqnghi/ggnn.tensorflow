int DiJiTian(int year, int month, int day);
int main(){
int year,montho,montht;
int n,i,k;
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%d %d %d",&year,&montho,&montht);
	k=DiJiTian(year,montht,1)-DiJiTian(year,montho,1);
	if(k%7==0){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
}




	return 0;
}
int DiJiTian(int year, int month, int day){
	int result = 0;
	for(int i = 1; i < month; i++){ 	
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			result += 31;	
		} else if (i == 4 || i ==6 || i == 9 || i==11){
			result += 30;
		} else if(i == 2){
			if(year%400==0||((year%4==0)&&(year%100!=0))){
				result += 29;
			} else {
				result += 28;
			}	
		}
	}
	result += day;	
	return result;	
}
	
