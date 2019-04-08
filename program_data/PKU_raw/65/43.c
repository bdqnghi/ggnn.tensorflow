int main(){
	int n;
	scanf("%d",&n);
	int a[200][2];
	int i,b,c;
	b=0;
	c=0;
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i][0],&a[i][1]);
		if(a[i][0]==0&&a[i][1]==1){
			b=b+1;
		}
		else if(a[i][0]==1&&a[i][1]==2){
			b=b+1;
		}
		else if(a[i][0]==2&&a[i][1]==0){
			b=b+1;
		}
		else if(a[i][0]==a[i][1]){
			b=b;
			c=c;
		}else{
			c=c+1;
		}
	}
	if(b>c){
		printf("A");
	}
	else if(b<c){
		printf("B");
	}
	else if(b==c){
		printf("Tie");
	}
	return 0;
}