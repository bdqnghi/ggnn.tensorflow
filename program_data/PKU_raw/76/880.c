int main(){
	int n,i,l,r=0,j=1,k,t=0;
	int a[10000][2];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i][0],&a[i][1]);
	}
	l=a[0][0];
	for(i=0;i<n;i++){
		for(k=0;k<n-1;k++){
			if(a[k][0]>a[k+1][0]){
				t=a[k][0];
				a[k][0]=a[k+1][0];
				a[k+1][0]=t;
				}
			if(a[k][1]>a[k+1][1]){
				t=a[k][1];
				a[k][1]=a[k+1][1];
				a[k+1][1]=t;
			}
		}
	}    
	for(i=1;i<n;i++){
		if(a[i-1][1]<a[i][0]){
			j=0;
			break;
		}
	}
	if(j==0){
		printf("no\n");
	}else{
		l=a[0][0];
		r=a[n-1][1];
		printf("%d %d",l,r);
	}
	return 0;
}


