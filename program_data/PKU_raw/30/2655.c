int yu7wuguan(int num);
int main(){
	int i,num;
	int result=0;
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		if(yu7wuguan(i)){
           result+=i*i;
		}
          }
		printf("%d",result);
			 return 0;
}
	int yu7wuguan(int num){
		if(num%7==0||num/10==7||num%10==7){
			return 0;
		}
		return 1;

	}