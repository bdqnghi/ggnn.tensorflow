int main()
{
	int n, xf[10], df[10] , i;
	double a, sum1=0, sum2=0, z, xfjd[10];
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &xf[i]);
	}
	for(i=0; i<n; i++){
		scanf("%d", &df[i]);
	}
	for(i=0; i<n; i++){
		if(90<=df[i] && df[i]<=100){
			a=4.0;
		}
		if(85<=df[i] && df[i]<=89){
			a=3.7;
		}
		if(82<=df[i] && df[i]<=84){
			a=3.3;
		}
		if(78<=df[i] && df[i]<=81){
			a=3.0;
		}
		if(75<=df[i] && df[i]<=77){
			a=2.7;
		}
		if(72<=df[i] && df[i]<=74){
			a=2.3;
		}
		if(68<=df[i] && df[i]<=71){
			a=2.0;
		}
		if(64<=df[i] && df[i]<=67){
			a=1.5;
		}
		if(60<=df[i] && df[i]<=63){
			a=1.0;
		}
		if(df[i]<60){
			a=0;
		}
		xfjd[i]=a*xf[i];
	}
	for(i=0; i<n; i++){
		sum1=sum1+xfjd[i];
	}
	for(i=0; i<n; i++){
		sum2=sum2+xf[i];
	}
	for(i=0; i<n; i++){
		z=sum1/sum2;
	}
	printf("%.2f", z);

	return 0;
}
