int main(){
	int a[N],b[N],n,i,p,q;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
	}
	p=0;
	q=0;
	for(i=0;i<n;i++){
		if(a[i]-b[i]==1||a[i]-b[i]==-2){
			q++;
		}else if(a[i]-b[i]!=0){
				p++;
		}
	}
	if(p>q){
		printf("A");
	}else if(q>p){
		printf("B");
	}else{
		printf("Tie");
	}
		return 0;
}

