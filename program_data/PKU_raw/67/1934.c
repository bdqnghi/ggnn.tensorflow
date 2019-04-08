int main (){
	int n,i;
	double m;
	int a[NUM],b[NUM];
	double c[NUM];
	scanf ("%d",&n);
	for(i=0;i<n;i++){
		scanf ("%d%d",&a[i],&b[i]);
	}
	m=(double)(b[0])/(a[0]);
	for(i=1;i<n;i++){
		c[i]=(double)(b[i])/(a[i]);
		if((c[i]-m)>0.05){
			printf ("better\n");
		}else if((m-c[i])>0.05){
			printf ("worse\n");
		}else{
			printf ("same\n");
		}
	}
	return 0;
}