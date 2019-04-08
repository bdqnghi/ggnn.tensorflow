int main(){
	int n,a,b,i;
	double q,e;
	scanf("%d\n",&n);
    scanf("%d %d\n",&a,&b);
	q=(double)b/(double)a;
	for(i=2;i<=n;i++){
		scanf("%d %d\n",&a,&b);
        e=(double)b/(double)a;
    if(e-q>0.05) printf("better\n");
	if(q-e>0.05) printf("worse\n");
	if((e-q)*(e-q)<=0.0025) printf("same\n");
	}
	return 0;
}

