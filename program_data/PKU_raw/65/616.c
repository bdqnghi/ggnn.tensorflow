int main(){
	int n,i,a,b,c,j=0,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d\n",&a,&b);
		c=a-b;
		if(c==0){
		continue;
		}else if(c==-1||c==2){
			j++;
		}else{
			k++;
		}
	}
if(j>k){
			printf("A");
		}else if(k>j){
			printf("B");
		}else if(j==k){
			printf("Tie");
		}

	return 0;
}