int main(){
	int a,b,c,total=0,d;
	scanf("%d%d%d",&a,&b,&c);
    total=(a-1)*1+(a-1)/4-(a-1)/100+(a-1)/400;
	

	for(int i=1;i<b;i++){
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			total+=31;}
		else if(i==4||i==6||i==9||i==11){
			total+=30;}
		else if(i==2){
			if((a%4==0 && a%100!=0 )|| a%400==0){
				total+=29;}
			else { total+=28;}}
	}
	d=(total+c)%7;

	switch(d)
	{
	case 0:
		printf("Sun.");
		break;
	case 1:
		printf("Mon.");
		break;
    case 2:
		printf("Tue.");
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
	}
	return 0;
}
