int yuqiwuguan(int number){
	if(number%7==0){
		return 0;}
	for(int num=number;num>0;num=num/10){
		if(num%10==7){
			return 0;
		}
		
	}
	return 1;
}

int main(){
	int i,sum,n;
	sum=0;
	scanf ("%d",&n);
	for(i=1;i<=n;i++){
		if (yuqiwuguan(i)){
			sum=sum+i*i;
		}
	}
	printf("%d",sum);
	return 0;
}