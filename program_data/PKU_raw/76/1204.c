int main(){
	int n;
	int i,e,f,c,d,m;
	int sum=0;
	int a[50000],b[50000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
	}
	for(int k=1;k<=n;k++){
		for(i=0;i<n-k;i++){
			if(a[i]>a[i+1]){
			e=a[i+1];
			a[i+1]=a[i];
			a[i]=e;
			f=b[i+1];
			b[i+1]=b[i];
			b[i]=f;
		}
	}
	}
	m=b[0];
	for(i=0;i<n;i++){
		if(m<b[i]){
			m=b[i];
		}
	}
	c=a[0];
	d=b[0];
	for(i=1;i<n;i++){
		if(a[i]<=d&&b[i]>d){
			d=b[i];
		}
	}
	if(d==m){
		printf("%d %d",c,d);
	}else{
		printf("no");
	}
	return 0;
}
