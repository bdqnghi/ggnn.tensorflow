int main(){
	int m,n,i,j;
	float sum;
	scanf("%d",&m);
	for(i=0;i<m;i++){
	sum=0;
	scanf("%d",&n);
	int*a=(int*)malloc(sizeof(int)*n);
	int*b=(int*)malloc(sizeof(int)*n);
	float*c=(float*)malloc(sizeof(float)*n);
	a[0]=2;
	a[1]=3;
	b[0]=1;
	b[1]=2;
	c[0]=(float)a[0]/b[0];
	c[1]=(float)a[1]/b[1];
	if(n==1){
		printf("%.3f\n",c[0]);}
	if(n==2){
		printf("%.3f\n",c[0]+c[1]);}
	if(n>=3){
		sum=c[0]+c[1];
		for(j=3;j<=n;j++){
			a[j-1]=a[j-2]+a[j-3];
			b[j-1]=b[j-2]+b[j-3];
			c[j-1]=(float)a[j-1]/b[j-1];
			sum+=c[j-1];
		}
		printf("%.3f\n",sum);
	}
	}
	return 0;
}
