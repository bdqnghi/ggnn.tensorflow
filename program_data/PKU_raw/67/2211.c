int main(){
	int n,i=0;
	double x,y,a,b;
	scanf("%d",&n);
	int bls[100],lxs[100];
	for(i=0;i<n;i++){
		scanf("%d %d",&bls[i],&lxs[i]);
	}
	a=bls[0];
	b=lxs[0];
	x=(b/a)*100;
	for(i=1;i<n;i++){
		a=bls[i];
		b=lxs[i];
		y=(b/a)*100;
		if(y-x>5){
			printf("better\n");
		}else if(x-y>5){
			printf("worse\n");
		}else{
			printf("same\n");
		}
	}
	return 0;
}
