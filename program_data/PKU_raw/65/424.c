int main(){
	int n,i;
	int A[200],B[200];
	int countA=0,countB=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&A[i],&B[i]);
		if((A[i]-B[i]==-1)||(A[i]-B[i]==2)){
			countA++;
		}else if((A[i]-B[i]==1)||(A[i]-B[i]==-2)){
			countB++;
		}
	}
	if(countA>countB) {
		printf("A");
	}else if(countB>countA){
		 printf("B");
	}else {
		printf("Tie");
	}
	return 0;
}
