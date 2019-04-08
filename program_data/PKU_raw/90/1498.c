int f(int m,int n){
	if(m<0) return 0;
	if(n==1) return 1;
	return f(m,n-1)+f(m-n,n);
}

void main(){
    int m,n,t;
	scanf("%d",&t);
	while(t-->0){
		scanf("%d%d",&m,&n);
		printf("%d\n",f(m,n));
	}
}