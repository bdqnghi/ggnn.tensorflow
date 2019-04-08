int ip(int x){
	int i;
	for(i=2;i*i<=x;i++){
		if(x%i==0){
			return 0;}
	}
	return 1;
}
int main(){
	int a,i,j,t,e,n;

	scanf("%d",&n);

	
	
	for(i=6;i<=n;i+=2){
		
		for(j=3;j<=i/2;j+=2){
			if(ip(j)&&ip(i-j)){
				printf("%d=%d+%d\n",i,j,i-j);
			j=i;
			}
		}
		
	}
	
	return 0;
}

