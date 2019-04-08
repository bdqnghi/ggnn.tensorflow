int main(){
	int n,a,b,sz[100],s[100];
	double c,z[100];
	scanf("%d %d %d",&n,&a,&b);
	c=1.0*b/a;
	for(int i=0;i<n-1;i++){
		scanf("%d %d",&sz[i],&s[i]);
		z[i]=1.0*s[i]/sz[i];
		if(z[i]>c){
			if(z[i]-c>0.05){
				printf("better\n");
			}else{
				printf("same\n");
			}
		}else{
			if(c-z[i]>0.05){
				printf("worse\n");
			}else{
				printf("same\n");
			}
		}
	}
	return 0;
}