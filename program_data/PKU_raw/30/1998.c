	int wuSeven(int a){
		if(a%7==0){
			return 0;
		}
		for(int num=a;num>0;num=num/10){
			if(num%10==7){
				return 0;
			}
		}
		return 1;
	}

int main(){
    int n;
	int sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(wuSeven(i)){
			sum=sum+i*i;
	}
	}
	printf("%d",sum);
	return 0;
}

