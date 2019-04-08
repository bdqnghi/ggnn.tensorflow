int isrunnian(int m);
int dijitian(int a,int b,int c);
int main(){
	int x,y,z,k,p=0;
	scanf("%d%d%d",&x,&y,&z);
	p=x+dijitian(x,y,z)+(x-1)/4-(x-1)/100+(x-1)/400-1;
	if(p%7==1){
		printf("Mon.");
	}
	if(p%7==2){
		printf("Tue.");
	}
	if(p%7==3){
		printf("Wed.");
	}
	if(p%7==4){
		printf("Thu.");
	}
	if(p%7==5){
		printf("Fri.");
	}
	if(p%7==6){
		printf("Sat.");
	}
	if(p%7==0){
		printf("Sun.");
	}
	return 0;
}
int dijitian(int a,int b,int c){
	int days=0;
	for(int i=1;i<b;i++){
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			days+=31;
		}
		if(i==4||i==6||i==9||i==11){
			days+=30;
		}
		if(i==2){
			if(isrunnian(a)){
				days+=29;
			}else{
				days+=28;
			}
		}
	}
	days+=c;
	return days%7;
}
int isrunnian(int m){
	if(m%4==0&&m%100!=0||m%400==0){
		return 1;
	}else{
		return 0;
	}
}