int main()
{
	int n,zong[N],xiao[N],k;
	double x,y[N];
	scanf("%d",&n);
	for(k=0;k<n;k++){
		scanf("%d %d",&zong[k],&xiao[k]);
	}
	x=1.0*xiao[0]/zong[0];
	for(k=1;k<n;k++){
		y[k]=1.0*xiao[k]/zong[k];
		if(y[k]-x>0.05){
			printf("better\n");
		}else if(x-y[k]>0.05){
			printf("worse\n");
		}else{
			printf("same\n");
		}
	}
	return 0;
}
