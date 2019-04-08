int main(){
	int n,a[MAX],b[MAX],i,j,k;
	k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
		j=a[i]-b[i];
		if(j==-1||j==2){
			k++;
		}else if(j==1||j==-2){
			k--;
		}else if(j==0){
			k=k;
		}
	}
	if(k>0){
		printf("A");
	}else if(k==0){
		printf("Tie");
	}else if(k<0){
		printf("B");
	}
	return 0;
}