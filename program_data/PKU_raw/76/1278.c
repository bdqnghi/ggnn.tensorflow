int main(){
	int j,i,n,q,a,p;
double k;
	int m[50000][2];
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		for(j=0;j<2;j++){
		scanf("%d",&m[i][j]);
	}
}
	q=m[0][0];
p=m[0][1];
	for(i=0;i<n;i++){
		if(m[i][0]<q){
			q=m[i][0];
		}
		if(m[i][1]>p){
			p=m[i][1];
		}
	}
	a=0;
	for(k=q+0.5;k<p;k++){
		for(j=0;j<=n;j++){
			if(k>=m[j][0]&&k<=m[j][1]){
				break;
			}else{ 
				if(j==n){
					a=1;
				}
			}
		}
	}
	if(a==0){
		printf("%d %d",q,p);
	}else{
		printf("no");
	}
	return 0;
}