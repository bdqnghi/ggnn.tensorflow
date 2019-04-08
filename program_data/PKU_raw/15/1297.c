int main(){
	int n,i,k,sum=0,m,l,p,q;
	int a=0,b=0;
	int sz[1000][1000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(k=0;k<n;k++){
	scanf("%d",&sz[i][k]);
		}
	}
	for(i=1;i<n-1;i++){
		for(k=1;k<n-1;k++){
			if(sz[i][k]==0&&a==0){
			
				m=i;
				l=k;
				a=1;
			}
			}
	}
	
	for(i=n-1;i>=0;i--){
		for(k=n-1;k>=0;k--){
			if(sz[i][k]==0&&b==0){
				
				p=i;
				q=k;
				b=1;
		
			}
	}
	}
	sum=(p-m-1)*(q-l-1);
	printf("%d",sum);

	return 0;
}