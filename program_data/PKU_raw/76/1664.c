int main(){
	int n,i,j,z,e;
	struct point{
		int a;
		int b;
	}m[5000],t;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&m[i].a,&m[i].b);
	}
	for(i=1;i<=n;i++){
		for(j=0;j<n-i;j++){
			if(m[j].a>m[j+1].a){
				t=m[j];
				m[j]=m[j+1];
				m[j+1]=t;
			}
		}
	}
	for(i=1;i<=n;i++){
		for(j=0;j<n-i;j++){
			if(m[j].b>m[j+1].b){
				e=m[j].b;
				m[j].b=m[j+1].b;
				m[j+1].b=e;
			}
		}
	}
	z=1;
	for(i=0;i<n-1;i++){
		if(m[i].b<m[i+1].a){
			z=0;
		}
	}
	if(z==1){
		printf("%d %d",m[0].a,m[n-1].b);
	}else{
		printf("no");
	}
	return 0;
}
