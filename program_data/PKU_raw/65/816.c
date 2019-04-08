int main(){
	int n,i,a=0,b=0;
	scanf("%d",&n);
	int A[200][200];
	for(i=0;i<n;i++){
		scanf("%d%d",&A[i][0],&A[i][1]);
	}
	for(i=0;i<n;i++){
		if(A[i][0]==0){
			if(A[i][1]==1){
				a++;
			}
			if(A[i][1]==2){
				b++;
			}
		}
		if(A[i][0]==1){
			if(A[i][1]==0){
				b++;
			}
			if(A[i][1]==2){
				a++;
			}
		}
		if(A[i][0]==2){
			if(A[i][1]==0){
				a++;
			}
			if(A[i][1]==1){
				b++;
			}
		}
	}

	if(a>b){
		printf("A");
	}
	if(a<b){
		printf("B");
	}
	if(a==b){
		printf("Tie");
	}
	return 0;
}