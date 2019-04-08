int max(int a,int b){
	
	if(a>=b)
			return a;
		else 
			return b;
	}
int min(int a,int b){
	if(a>=b){
		return b;
	}
	else return a;
}

void main (){

	int i,c;
	int n;
	int a=0;
	int b=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&c);
		b=max(min(a,c),min(a,b));
		a=max(a,c);
	}
	printf("%d\n",a);
	printf("%d\n",b);

}
