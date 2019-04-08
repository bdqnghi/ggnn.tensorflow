int main(){
	int n,a[200],b[200],i,k,t,p;
	k=0;
	t=0;
	p=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
		if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0)){
			k++;
		}else if(a[i]==b[i]){
			t++;
		}else{
			p++;
		}
    }
	if(k>p){
		printf("A");
	}else if(k==p){
		printf("Tie");
	}else{
		printf("B");
	}
	return 0;
}

