int main(){
    int i,n;
	int s=0;
	int t;
	int b=0;
	int a[10000];
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		t=0;
		for(int j=2;j<i;j++){
			if(i%j!=0){
				t++;
			}
		}
		if(t==i-2){
			a[s]=i;
			s++;
		}
	}
	for(int k=0;k<s;k++){
		if(a[k+1]-a[k]==2){
			printf("%d %d\n",a[k],a[k+1]);
			b=1;
		}
	}
	if(b==0)
		printf("empty");
	return 0;
}