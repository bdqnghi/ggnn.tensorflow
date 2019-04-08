int main(){
	int x,y,a,n,result,i;
	double sz[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&x,&y);
		sz[i]=1.0*y/x;
	}
	for(i=1;i<n;i++){
		if(20*(sz[i]-sz[0])<-1){
			printf("worse\n");
		}
		else if(20*(sz[i]-sz[0])>1){
			printf("better\n");
		}
		else{
			printf("same\n");
		}
	}
	
	return 0;
}
