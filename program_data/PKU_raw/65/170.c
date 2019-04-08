int main() {
	int n,i,a,b,r=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d%d",&a,&b);
		if(a==0&&b==1){
			r+=1;
		}else if(a==1&&b==2){
			r+=1;
		}else if(a==2&&b==0){
			r+=1;
		}else if(a==b){
			r=r;
		}else {
			r=r-1;
		}
	}
	if(r>0){
		printf("A");
	}else if(r<0){
		printf("B");
	}else {
		printf("Tie");
	}
	return 0;
}
