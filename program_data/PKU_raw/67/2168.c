int main(){
	int n,a,b,c,d,i;
	float x,y,sz[1000];
	scanf("%d",&n);
	scanf("%d%d",&a,&b);
	x=(float)b/a;
	for(i=1;i<n;i++){
		scanf("%d%d",&c,&d);
		sz[i]=(float)d/c;
	}for(i=1;i<n;i++){
		if(sz[i]-x>0.05){
			printf("better\n");
		}else if(x-sz[i]>0.05){
			printf("worse\n");
		}else{
			printf("same\n");
		}
	}return 0;
}


	

