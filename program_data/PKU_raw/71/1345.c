int DiJiTian(int year, int month);
int isRunNian(int year);

int main(){
	int n,i;
	int year[200],mon1[200],mon2[200],a[200];

	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%d %d %d",&year[i],&mon1[i],&mon2[i]);
	}

	for(i=0;i<n;i++){
		a[i]=DiJiTian(year[i],mon1[i])-DiJiTian(year[i],mon2[i]);
		a[i]=(a[i]>=0?a[i]:(0-a[i]));
	}

	for(i=0;i<n;i++){
		if(a[i]%7==0){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}

	return 0;
}



int DiJiTian(int year, int month){
	int result = 0;
	int day=1;
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
	result += day;
	return result;	
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
