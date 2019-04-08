int main(){
	int a,b,c,day,i;
	scanf("%d %d %d",&a,&b,&c);
    a--;
	day=a;
    day=a+a/4+a/400-a/100;
	a++;
    if(b==1){
		day+=c;
	}else{
		if(b==2){
			day=day+c+31;
		}else{
                if((a%4==0)&&(a%100!=0)||(a%400==0)&&(a%3200!=0)){
                       day=day+31+29+c;
				}else{
				       day=day+31+28+c;
				}
			    for(i=3;i<b;i++){
				if((i==3)||(i==5)||(i==7)||(i==8)||(i==10)){
					day+=31;
				}else{
					day+=30;
                }
			}
		}
	}
	day=day%7;
    switch(day){
	case 1:{
		printf("Mon.");
		break;
		   }
	case 2:{
		printf("Tue.");
		break;
		   }
	case 3:{
		printf("Wed.");
		break;
		   }
	case 4:{
		printf("Thu.");
		break;
		   }
	case 5:{
		printf("Fri.");
		break;
		   }
	case 6:{
		printf("Sat.");
		break;
		   }
	case 0:{
		printf("Sun.");
		break;
		   }
	}
	return 0;
}
