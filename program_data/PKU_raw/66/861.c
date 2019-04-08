
int main(){

	int a,b,c;
	int sum=0;
	int i;

	scanf("%d %d %d",&a,&b,&c);
	sum=a-1+(a-1)/400+(a-1)/4-(a-1)/100;

	for(i=1;i<b;i++){

		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			sum+=3;
		}else if(i==2){
			if(a%400==0||(a%4==0&&a%100!=0)){
				sum+=1;
			}
		}else {
			sum+=2;
		}
	}

	sum+=c;

	sum=(sum-1)%7;

	if(sum==0){
		printf("Mon.\n");
	}else if(sum==1){
		printf("Tue.\n");
	}else if(sum==2){
		printf("Wed.\n");
	}else if(sum==3){
		printf("Thu.\n");
	}else if(sum==4){
		printf("Fri.\n");
	}else if(sum==5){
		printf("Sat.\n");
	}else if(sum==6){
		printf("Sun.\n");
	}

	


	return 0;
}

