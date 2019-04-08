int fib(int a,int e);
int main(){
	int n,b,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&b);
		printf("%d\n",fib(b,2));
	}
	scanf("%d",&n);
	return 0;
}
int fib(int a,int e){
	int j,c,d;
	c=1;
	if(a<=e) return 1;
	for(j=e;j<=sqrt(a);j++){
		if(a%j==0){
			d=a/j;
			c=c+fib(d,j);
		}
	}
	return c;
}
