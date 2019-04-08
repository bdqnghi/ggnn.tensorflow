	int i;
	int num(int year,int month,int day){
		int n=day;
		for(i=1;i<month;i++){
			if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
				n+=31;
			else if(i==4||i==6||i==9||i==11)
				n+=30;
			else if(i==2)
				if((year%4==0&&year%100!=0)||(year%400==0))
					n+=29;
				else n+=28;
		}
		for(i=1;i<year;i++){
			if((i%4==0&&i%100!=0)||(i%400==0))
				n+=366;
			else n+=365;
		}
		return n;
	}
int main(){
	int sy,sm,sd,ey,em,ed,m;
	scanf("%d%d%d%d%d%d",&sy,&sm,&sd,&ey,&em,&ed);
	m=num(ey,em,ed)-num(sy,sm,sd);
	printf("%d",m);
	return 0;
}