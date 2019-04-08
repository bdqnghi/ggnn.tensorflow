int FN(int n);
int main()
{
	int n,i;
	int a[20];
	int m[20];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		m[i]=FN(a[i]);
	}
	for(i=0;i<n;i++){
		printf("%d\n",m[i]);
	}
	return 0;
}

int FN(int n){
	if(n==2||n==1){
		return 1;
	}
	if(n>2){
		return FN(n-1)+FN(n-2);
	}
}