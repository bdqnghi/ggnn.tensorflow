int main(){
	int n;
	int x[10000],y[10000];
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		scanf("%d%d",&x[i],&y[i]);
	}
	int a=x[0],b=y[0];
	int p,q;
	for(i=1;i<n;i++){
		if(a>x[i]){
			a=x[i];
		}
		if(b<y[i]){
			b=y[i];
		}
	}
	double w;
	int k,l=0;
	for(w=1.0*a+0.5;w<b;w++){
		for(k=0;k<n;k++){
			if(w>x[k]&&w<y[k]){
				break;
			}
			l++;
		}
		if(l==n){
			printf("no");
			return 0;
		}
		l=0;
	}
	printf("%d %d",a,b);
	return 0;
}


