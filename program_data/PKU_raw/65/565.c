int main(){
	int n,i,a[200],b[200];
	int c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
		if(a[i]-b[i]==1||a[i]-b[i]==-2){
			c++;
		}
		if(a[i]-b[i]==-1||a[i]-b[i]==2){
			c--;
		}
	}
	if(c==0){
		printf("Tie");
	}
	if(c>0){
		printf("B");
	}
	if(c<0){
		printf("A");
	}
	


	return 0;
}
