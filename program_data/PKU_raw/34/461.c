int main(){
	int n,m;
	scanf("%d",&n);
	if(n==1){
		printf("End");
		return 0;
	}else {
	while (1){
		if(n%2==0){
			m=n;
			n=n/2;
			printf("%d/2=%d",m,n);
			printf("\n");
		}else {
			m=n;
			n=3*n+1;
			printf("%d*3+1=%d",m,n);
			printf("\n");
		}
		if (n==1){
			break;
		}
	}
	printf("End");
	}
	return 0;
}

