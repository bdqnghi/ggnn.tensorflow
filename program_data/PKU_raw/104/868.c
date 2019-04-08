void main(){
	int x,y;
	int same(int m,int n);
	scanf("%d%d",&x,&y);
	printf("%d",same(x,y));
}

int same(int x,int y){
	while(x!=y){
		if(x>y) x=x/2;
		else y=y/2;
	}
	return x;
}