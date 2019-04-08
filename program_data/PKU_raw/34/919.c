int main(){
	int n,sum;
	scanf("%d",&n);
	sum=n;
	if(n==1){
	printf("End");
	}
	while(n!=1){
		if(n%2==0){
			sum/=2;
			printf("%d/2=%d\n",n,sum);
			n=sum;
		}else{
			sum=3*n+1;
			printf("%d*3+1=%d\n",n,sum);
			n=sum;
		}
		if(sum==1){
			printf("End");
			break;
		}
	}
	return 0;
}