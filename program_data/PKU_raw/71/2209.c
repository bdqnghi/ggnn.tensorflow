int isRunNian(int year){
	int result;
	if(year%400==0||(year%4==0&&year%100!=0)){
		result=1;
	}else{
		result=0;
	}
      return result;	
}
int DiJiTian(int year, int month, int day){
	int result=0;
	for(int i=1; i<month;i++){ 	
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			result += 31;	
		} else if (i==4||i==6||i==9||i==11){
			result += 30;
		} else if(i==2){
			if(isRunNian(year)){
				result+=29;
			} else {
				result+=28;
			}	
		}
	}
	result+=day;	
	return result;	
}

int main(){
	int n,a,b,c;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d%d%d",&a,&b,&c);
		if((DiJiTian(a,b,1)-DiJiTian(a,c,1))%7==0){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
