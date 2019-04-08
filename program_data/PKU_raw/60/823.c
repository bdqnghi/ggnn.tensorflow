int f(int x){
	int i,a,b=0;
	for(i=2;i<x;i++){
		if(x%i!=0)
			a=0;
		else
			a=1;
		if(a==0&&b==0)
			b=0;
		else
			b=1;
	}
	if(b==1)
		return 1;
	if(b==0)
		return 0;
}
int main(){
    int n,j,z=0,g,h;
	scanf("%d",&n);
    for(j=2;j<=n-2;j++){

	g=f(j);
		h=f(j+2);
		if(g==0&&h==0){
			printf("%d %d\n",j,j+2);
		z=1;
		}
		
		}
		
	if(z==0){
		printf("empty");
	}
	return 0;
}