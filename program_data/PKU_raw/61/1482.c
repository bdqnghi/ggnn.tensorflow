int Fibonacci(int n);
int main(){
	int n,i,j,sz[20];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&j);
		sz[i]=Fibonacci(j);
		printf("%d\n",sz[i]);
	}
	return 0;
}
int Fibonacci(int n){
	int s1,s2,s3,i;
	if(n==1){
		return 1;
	}
	if(n==2){
		return 1;
	}
	s1=1;
	s2=1;
	for(i=0;i<n-2;i++){
		s3=s2+s1;
		s1=s2;
		s2=s3;
	}
	return s3;
}