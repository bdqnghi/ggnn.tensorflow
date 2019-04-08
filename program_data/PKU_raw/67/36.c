int main(){
    int n,i,y,z;
	double m;
	int s[1000],x[1000];
	double you[1000];
	scanf("%d",&n);
    scanf("%d%d",&z,&y);
	m=100.0*y/z;
	for(i=0;i<n-1;i++){
		scanf("%d%d",&s[i],&x[i]);
		you[i]=100.0*x[i]/s[i];

		if(you[i]-m>5){
			printf("better\n");
		}else if(m-you[i]>5){
			printf("worse\n");
		}else{
			printf("same\n");
		}
	}
	return 0;
}