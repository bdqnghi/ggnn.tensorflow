int main()
{
	int n,i;
	double  a,b,x[5000],y[5000],z,w[5000];
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%lf %lf",&x[i],&y[i]);
		z=y[0]/x[0];
		w[i]=y[i]/x[i];
	}
	for(i=1;i<n;i++){
		if((w[i]-z)>0.05){
			printf("better\n");
		}if((z-w[i])>0.05){
			printf("worse\n");
		}
		if((z-w[i])<=0.05&&(z-w[i])>=(-0.05)){
			printf("same\n");
		}
	}


        
	
	return 0;
}

