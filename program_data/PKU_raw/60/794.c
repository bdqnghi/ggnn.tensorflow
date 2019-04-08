int main(){
	int i,j,n,sz[10000],a,b=0;
    scanf("%d",&n);
	for(i=2;i<=n;i++){
		for(j=2;j<i;j++){
            a=i%j;
			if(a==0){
				break;
			}
			if(j==i-1){
                sz[b]=i; 
			    b=b+1;
			}
		}
	}
	if(b==1||b==0){
		printf("empty\n");
	}else{
	    for(i=1;i<b;i++){
		     if(sz[i]-sz[i-1]==2){
			      printf("%d %d\n",sz[i-1],sz[i]);
			 }
		}
	}
	return 0;
}