double fnt(int n);
int main()
{
	int z,j,k,l;
	double sz[50];
	double sum=0,s;
	scanf("%d",&z);
    for(j=0;j<z;j++){
        scanf("%d",&k);
		for(l=0;l<k;l++){
			s=fnt(l+1)/fnt(l);
			sum=sum+s;
		}
		sz[j]=sum;
		sum=0;
	}
	for(j=0;j<z;j++){
	    printf("%.3lf\n",sz[j]);
	}
	return 0;
}
double fnt(int n){
	double m,a=2,b=1;
	if(n==0)
		m=1;
    if(n==1)
		m=2;
    if(n>1){
		for(int i=1;i<n;i++){
			m=a+b;
			b=a;
			a=m;
		}
	}
	return m;
}