int main(){
    int i,n,a[200],b[200],ai=0,bi=0;
	scanf("%d\n",&n);
	for(i=0;i<n-1;i++){
	scanf("%d %d\n",&a[i],&b[i]);
	}
	scanf("%d %d",&a[n-1],&b[n-1]);
	for(i=0;i<n;i++){
		if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0)){
		ai+=1;
		}else if(a[i]==b[i]){
		
		}else{
		bi+=1;
		}
	}
	if(ai>bi){
	printf("A");
	}else if(ai==bi){
	printf("Tie");
	}else{
	printf("B");
	}
	return 0;
}