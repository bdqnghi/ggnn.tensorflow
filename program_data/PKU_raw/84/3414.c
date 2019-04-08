int main(){
	int i=0;
	int n;
	scanf("%d",&n);
	int a,b;
	int x,y,l;
	scanf("%d%d",&x,&y);
	if(x>y){
		a=x;
		b=y;
	}else{
		a=y;
		b=x;
	}
	while(i<=n-3){
		scanf("%d",&l);
		if(l>a){
			b=a;
			a=l;
		}else{
			if(l>b){
				b=l;
			}
		}
		i++;
	}
	printf("%d\n%d",a,b);
		return 0;
}