int main(){
	int n,a,b;
	int B=0;
	int A=0;
	int h[200][2];
	scanf("%d",&n);
	for(a=0;a<n;a++){
		scanf("%d%d",&h[a][0],&h[a][1]);
	}
	for(b=0;b<n;b++){
		if(h[b][0]==0&&h[b][1]==1){
			A+=1;
		}else if(h[b][0]==1&&h[b][1]==2){
			A+=1;
		}else if(h[b][0]==2&&h[b][1]==0){
			A+=1;
		}else if(h[b][1]==0&&h[b][0]==1){
			B+=1;
		}else if(h[b][1]==1&&h[b][0]==2){
			B+=1;
		}else if(h[b][1]==2&&h[b][0]==0){
			B+=1;
		}
	}
	if(A>B){
		printf("A");
	}else if(B>A){
		printf("B");
	}else if(B==A){
		printf("Tie");
	}
	return 0;
}