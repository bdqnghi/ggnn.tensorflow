int main(){
	int i,a=0,b=0,n,A[200],B[200];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&A[i],&B[i]);
	}
	for(i=0;i<n;i++){
		if(A[i]==B[i]){
			a++;
			b++;
		}else if((A[i]-B[i]==-1)||(A[i]-B[i]==2)){
			a++;
		}else{
			b++;
		}
	}
	if(a>b){
		printf("A");
	}else if(a<b){
		printf("B");
	}else{
		printf("Tie");
	}
	return 0;
}