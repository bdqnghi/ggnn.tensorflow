int main (){
	int w,i,sum=0,n;
	scanf("%d",&w);
	if((13+w-1)%7==5){
		printf("1\n");
	}
	for (n=2;n<=12;n++){
		sum=0;
	for (i=1;i<n;i++){
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			sum+=31;
		}
	else	if(i==2){
			sum+=28;
		}
		else{
			sum+=30;
		}
	}
	sum+=13;
	if((sum+w-1)%7==5){
		printf("%d\n",n);
	}
	}
	return 0;
}