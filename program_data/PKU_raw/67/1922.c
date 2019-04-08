int main(){
	int n,m,s,i;
	double sz[c];
	double p;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&m,&s);
		p=s*1.0/m;
		sz[i]=p;
	}
	for(i=1;i<n;i++){
		p=sz[i]-sz[0];
		if(p<=0.05&&p>=-0.05){
			printf("same\n");
		}
		else if(p>0.05){
			printf("better\n");
		}
		else{
			printf("worse\n");
		}
	}
	return 0;
}