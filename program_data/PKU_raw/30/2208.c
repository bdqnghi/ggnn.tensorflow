int yu7wuguan(int e);


int main(){
	int n;
	scanf("%d",&n);
	int i,result;
	result=0;
	for(i=1;i<=n;i++){
		if(yu7wuguan(i)){
				result+=i*i;
		}
	}

	printf("%d",result);

	return 0;
}

int yu7wuguan(int e){
	if(e%7==0){
		return 0;
	}
	while(e/10>=0&&e>0){
		int i;
		i=e%10;
		if(i==7){
			return 0;
		}
		e/=10;
	}
	return 1;
}