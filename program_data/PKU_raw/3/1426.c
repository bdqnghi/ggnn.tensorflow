int main(){
	int n,m,i,k,s;
	m=0;
	int sz[LEN],p[LEN];
	scanf("%d%d",&n,&k);
	for(i=0; i<n; i++){
		scanf("%d",&sz[i]);
		p[m]=sz[i];
		m++;
	}
    for(i=0;i<n;i++){
	for(m=0;m<n;m++){
	   s=sz[i]+p[m];
	   if(s==k){
	   break;
	   }
	   }
       if(s==k){
	   break;
	   }
	}
    if(i==n){
		printf("no");
	}
	else{
        printf("yes");
		}
    return 0;
}