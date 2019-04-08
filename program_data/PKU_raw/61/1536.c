int f(int n);
int main(){
	int n,i;
	int x;
	int a[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		x=f(a[i]-1);
		printf("%d\n",x);
	}

	return 0;
}

int f(int n){
	if(n==0){
		return 1;
	}
	if(n==1){
		return 1;
	}
	if(n>1){
		return f(n-1)+f(n-2);
	}
}

