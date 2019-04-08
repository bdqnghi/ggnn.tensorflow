int main(){
	int n;
	int m;
	scanf("%d",&n);
	int i;
	for(i=0;i<MAX;i++){
		if(n!=1){
			if(n%2!=0){
				m=n*3+1;
				printf("%d*3+1=%d\n",n,m);
				n=m;
			}else{
				m=n/2;
				printf("%d/2=%d\n",n,m);
				n=m;
			}
		}else{
			printf("End");
			break;
		}
	}
	
	return 0;
}
