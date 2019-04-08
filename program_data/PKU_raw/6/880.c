void main(){
	int k,m,n,p;
	int matrix(int m,int n);
	scanf("%d",&p);
	for(k=0;k<p;k++){
		scanf("%d%d",&m,&n);
		printf("%d\n",matrix(m,n));
	}
}

int matrix(int m,int n){
	int i,j,a,sum=0;
	for(i=0;i<m;i++) for(j=0;j<n;j++) {
		scanf("%d",&a);
		if(i==0||i==m-1||j==0||j==n-1) sum+=a;
	}
	return sum;
}