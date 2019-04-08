int diji( int month, int day){
	int i,s=0;
	for(i=1;i<month;i++){
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			s=s+31;
		}
		if(i==4||i==6||i==9||i==11){
			s=s+30;
		}
		if(i==2){
			s=s+28;
		}
	}
	s=s+day;
	return s;
}
int main(){
	int n,days,mon,date,m,j;
	scanf("%d",&n);
	for(j=1;j<=12;j++){
	days=0;
    days=diji(j,13);
	m=days%7;
	if((m+n-1==5)||((m+n-1)%7==5)){
		printf("%d\n",j);
	}
	}
	return 0;
}