int main(){
	int n,i;
	int flag;
	scanf("%d",&n);
	int X[300];
	int Y[300];
	int q=0;
	for(i=0;i<n;i++){
		scanf("%d",&X[i]);
	}for(i=0;i<n;i++){
		if(i==0){
			Y[0]=X[0];
		} else if(i>=1){
			flag=0;
			for(int k=0;k<i;k++){
				if(X[k]==X[i]){
				flag=1;
				}
			}
			if(flag==0){
				q++;
				Y[q]=X[i];
				
				}
		}
	}
	for(i=0;i<q;i++){
		printf("%d,",Y[i]);
	}
	printf("%d",Y[q]);
	return 0;
}
