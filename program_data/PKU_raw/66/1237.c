int rn(int y){
	int r;
	r=0;
	if(y%400==0||(y%100!=0&&y%4==0))
		r=1;
	return r;
}

int main(){
	int ye,mon,day,d,i,x;
	scanf("%d%d%d",&ye,&mon,&day);
	d=day;
	for(i=1;i<mon;i++){
		if(i==1||i==3||i==5||i==7||i==8||i==10)
			d=d+31;
		else if(i==4||i==6||i==9||i==11)
			d=d+30;
		else if(i==2){
			if(rn(ye)==1)
				d=d+29;
			else
				d=d+28;
		}
	}
	d+=365*(ye-1)+(ye-1)/4-(ye-1)/100+(ye-1)/400-(ye-1)/4000;
	if(ye>4000)
		d++;
	x=d%7;
	if(x==0)
		printf("Sun.");
	else if(x==1)
		printf("Mon.");
	else if(x==2)
		printf("Tue.");
	else if(x==3)
		printf("Wed.");
	else if(x==4)
		printf("Thu.");
	else if(x==5)
		printf("Fri.");
	else if(x==6)
		printf("Sat.");


	return 0;
}