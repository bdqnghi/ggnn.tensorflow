int main(){
	int n,A[6]={100,50,20,10,5,1},B[6],i;
	scanf("%d",&n);
	B[0]=n/A[0];
	for(i=1;i<6;i++){
		n=n-A[i-1]*B[i-1];
		B[i]=n/A[i];
	}
	for(i=0;i<6;i++){
		printf("%d\n",B[i]);
	}
	return 0;
}