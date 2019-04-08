int main(){
	int i,a,b,c,d,e,f,g,sum=0;
	scanf("%d%d%d",&a,&b,&c);
    e=(a-1)%400;
	f=(a-1)/400;
	g=e%100;
	sum=365*((a-1)%7)+f*97+e/100*24+g/4;
	sum=sum%7;
	for(i=1;i<b;i++){
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
			sum+=31;
		else if(i==4||i==6||i==9||i==11)
			sum+=30;
		else if(a%400==0||((a%4==0)&&(a%100!=0)))
			sum+=29;
		else sum+=28;}
	sum+=c;
	d=sum%7;
	switch(d){
	case 1:
		printf("Mon.");
		break;
    case 3:
        printf("Wed.");
		break;
	case 4:
		printf("Thu.");
		break;
	case 5:
		printf("Fri.");
		break;
	case 6:
		printf("Sat.");
		break;
	case 2:
		printf("Tue.");
		break;
	default:
		printf("Sun.");}
	return 0;
}