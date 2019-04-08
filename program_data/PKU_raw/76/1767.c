int main(){
    int n,i,j,a,b,c=0;
    scanf("%d",&n);
    int sz[100004];
	for(i=0;i<100004;i++){
	    sz[i]=0;
	}
	for(i=0;i<n;i++){
	    scanf("%d%d",&a,&b);
		for(j=2*a;j<=2*b;j++){
			sz[j]=1;
		}
	}
	for(i=0;i<100004;i++){
		if(sz[i]==1){
			if(sz[i-1]==0){
			    a=i/2;
			    c++;
			}
			if(sz[i+1]==0){
			    b=i/2;
			}
		}
	}
	if(c==1){
        printf("%d %d\n",a,b);
    }else{
	    printf("no\n");
	}
	return 0;
}
