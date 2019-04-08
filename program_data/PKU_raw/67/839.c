int main(){
	int n,i,x,y;
	scanf("%d",&n);
	scanf("%d%d",&x,&y);
	double z=y*1.0/x;
	double sz[100];
	int zong[100];
	int xiao[100];
	for(i=0;i<n-1;i++){
		scanf("%d%d",&zong[i],&xiao[i]);
		sz[i]=xiao[i]*1.0/zong[i];
	}
	for(i=0;i<n-2;i++){
		if(sz[i]-z>0.05){
			printf("better\n");
		}
		else if(z-sz[i]>0.05){
			printf("worse\n");
		}
		else{
			printf("same\n");
		}
	}
	if(sz[i]-z>0.05){
			printf("better");
		}
		else if(z-sz[i]>0.05){
			printf("worse");
		}
		else{
			printf("same");
		}

	return 0;
}
