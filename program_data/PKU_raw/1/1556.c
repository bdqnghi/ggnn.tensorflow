int f(int n, int min){
	int i, result=1;
	if(min>n)
		return 0;
	for(i=min;i<n;i++){
		if(n%i==0){
			result+=f(n/i,i);
		}
	}
	return result;
}
	
    int main(){
	int n,a,i,t;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		t=f(a,2);
		if(i<n-1)
			printf("%d\n",t);
		else
			printf("%d",t);

	}
	return 0;
	}