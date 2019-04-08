int xgy(int year,int month1,int month2){
	int i,m,days=0;
	if(month1>month2){
		m=month1;
		month1=month2;
		month2=m;
	}
	for(i=month1;i<month2;i++){
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			days+=31;
		}
		else if(i==4||i==6||i==9||i==11){
			days+=30;
		}
		else if(i==2){
			if(year%400==0||(year%4==0&&year%100!=0)){
				days+=29;
			}
			else{
				days+=28;
			}
		}
	}
	if(days%7==0){return 1;}
	if(days%7!=0){return 0;}
}
int main(){
	int i,n,year,month1,month2;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d%d",&year,&month1,&month2);
		if(xgy(year, month1, month2)){
			printf("YES\n");
		}
		else{printf("NO\n");}
	}
return 0;
}