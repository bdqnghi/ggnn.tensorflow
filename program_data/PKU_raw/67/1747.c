int main(){
	int n,a,b,i,m,k;
	double x,y;
	scanf("%d %d %d",&n,&a,&b);
	x=1.0*b/a;
	for(i=0;i<n-1;i++){
		scanf("%d %d",&m,&k);
		y=1.0*k/m;
		if(x-y>0.05){
			printf("worse");
			printf("\n");
		}else if(y-x>0.05){
			printf("better");
			printf("\n");
		}else {
			printf("same");
			printf("\n");
		}
	}
		return 0;
	}