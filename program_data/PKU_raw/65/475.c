int main() {
	int n,i,a=0,b=0;
	int A[201];
	int B[201];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&(A[i]),&(B[i]));
	}
	for(i=0;i<n;i++){
		if(A[i]==0&&B[i]==1){
			a+=1;
		}else if(A[i]==0&&B[i]==2){
			b+=1;
		}else if(A[i]==1&&B[i]==0){
			b+=1;
		}else if(A[i]==1&&B[i]==2){
			a+=1;
		}else if(A[i]==2&&B[i]==0){
			a+=1;
		}else if(A[i]==2&&B[i]==1){
			b+=1;
		}else{
			a=a;
			b=b;
		}
	}
	if(a<b){
		printf("B");
	}else if(a>b){
		printf("A");
	}else{
		printf("Tie");
	}
	return 0;
}



