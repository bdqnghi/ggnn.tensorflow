
int main(){
	int n,i,k,e;
	int year,month1,month2;
	int day;
	scanf("%d",&n);
	for(i=0;i<n;i++){
                  day=0;
		scanf("%d %d %d", &year, &month1, &month2);
		if(month1>month2){
			e=month2;
			month2=month1;
			month1=e;
		}

		for(k=month1;k<month2;k++){
			if(k==1||k==3||k==5||k==7||k==8||k==10||k==12){
				day=day+31;
		}else if(k==4||k==6||k==9||k==11){
			day=day+30;
		}else if(k==2){
			if(year%400==0||(year%4==0&&year%100!=0)){
				day=day+29;
			}else{
				day+=28;
			}
		}
		}
		if(day%7==0){
			printf("YES\n");
		}else if(day%7!=0){
			printf("NO\n");
			}
		}

	return 0;
}