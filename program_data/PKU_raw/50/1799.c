int main (){
	int w,i,sum=13;
	scanf("%d",&w);
	if((13+w-1)%7==5){
		printf("1\n");
	}
	for (i=2;i<=12;i++){
	   if(i-1==1||i-1==3||i-1==5||i-1==7||i-1==8||i-1==10){
			sum+=31;
	   }else if(i-1==2){
			sum+=28;
            }else{
			sum+=30;
	   }
	   if((sum+w-1)%7==5){
		printf("%d\n",i);
	   }
	}
	return 0;
}
