int main() {
	int n,a[1000][3],i,j,x,e;
	double jl[1000][1000],m,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
	}
	k=0;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			m=(a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1])+(a[i][2]-a[j][2])*(a[i][2]-a[j][2]);
			jl[i][j]=sqrt(1.0*m);
			if(k<jl[i][j]){
				k=jl[i][j];
			}
		}
	}
	for(x=1;x<=n*(n-1)/2;x++){
		e=0;
		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++){
				if(k==jl[i][j] && e==0){
				printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",a[i][0],a[i][1],a[i][2],a[j][0],a[j][1],a[j][2],jl[i][j]);
				jl[i][j]=0;
				k=0;
				e=1;
				}
			}
		}
		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++){
				if(k<jl[i][j]){
					k=jl[i][j];
				}
			}
		}
	}
	return 0;
}