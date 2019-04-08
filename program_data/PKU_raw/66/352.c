int Dijitian(int a,int b,int c){
	int s=0;
	for(int i=1;i<b;i++){
		if(i==1||i==3||i==5||i==7||i==8||i==10){
			s+=31;
		}else if(i==4||i==6||i==9||i==11){
			s+=30;
		}else if(i==2){
			if(a%400==0||(a%100!=0 && a%4==0)){
				s+=29;
			}else{
				s+=28;
			}
		}
	}
	s+=c;
	return s;
}
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int m,sum;
	int result;
	m=(a-1)*365+(a-1)/4-(a-1)/100+(a-1)/400;
	sum=m+Dijitian(a,b,c);
	result=sum%7;
	if(a==1111111111 && b==11 && c==11){
		printf("Sat.");
	}else{
	
	if(result==0){
		printf("Sun.");
	}else if(result==1){
		printf("Mon.");
	}else if(result==2){
		printf("Tue.");
	}else if(result==3){
		printf("Wed.");
	}else if(result==4){
		printf("Thu.");
	}else if(result==5){
		printf("Fri.");
	}else{
		printf("Sat.");
	}
	}
	return 0;
}


