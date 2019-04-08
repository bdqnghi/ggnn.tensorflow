int main(){
	int n;
	int a[10001];
	int b[10001];

	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&(a[i]),&(b[i]));
	}
	for(int k=1;k<=n;k++){
	for(int i=0;i<n-k;i++){
		if(a[i]>a[i+1]){
			int e=0,f=0;
			e=a[i];
			a[i]=a[i+1];
			a[i+1]=e;
			f=b[i];
			b[i]=b[i+1];
			b[i+1]=f;
		}
	}
	}
	int c=0,d;
	d=b[0];
	for(int i=1;i<n;i++){		
		if(d>=a[i]){
			c++;
		}
		if(d<b[i]){
			d=b[i];
		}
	}
	if(c==n-1){
		printf("%d %d",a[0],d);
	}else{
		printf("no");
	}	
	return 0;
}