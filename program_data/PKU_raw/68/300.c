int prime(int x);
int main(){
	int j,k,n;
	scanf("%d",&n);
	for(j=6;j<=n;j+=2)
		for(k=3;k<=(n/2);k+=2)
			if(prime(k)==10&&prime(j-k)==10){
				printf("%d=%d+%d\n",j,k,j-k);
			break;}
			return 0;
}
int prime(int x){
	int i,p=10;
	
	if(x==3||x==5||x==7)
		return p;
	else{
		for(i=3;i<=sqrt(x);i+=2){
			if(x%i==0){
				p=0;
		
			break;}
	}
	}
	return p;
}

