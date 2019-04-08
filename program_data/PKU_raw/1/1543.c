int f(int a,int min){
	if(a<min)
		return 0;
	int sum=1;
	for(int i=min;i<a;i++){
		if(a%i==0)
			sum+=f(a/i,i);
	}
	return sum;
}
int main(){
	int n;
	int a[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		a[i]=f(a[i],2);
	}
	for(int i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
