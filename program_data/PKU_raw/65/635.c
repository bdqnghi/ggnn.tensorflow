int main() {
	int n,i,a,b,x=0,y=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		if(a!=b){
			if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0))
				x=x+1;
			else y=y+1;
		}
	}
	if(x>y){
		printf("A");
	}
	if(x<y){
		printf("B");
	}
	if(x==y){
		printf("Tie");
	}


	return 0;
}
