int main()
{
	int n,i,K=0;
	double G,S=0;
	int a[100];
	int b[100];
	double c[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++){
		if(b[i]>=90){
			c[i]=4.0;
		}else if(b[i]>=85){
			c[i]=3.7;
		}else if(b[i]>=82){
			c[i]=3.3;
		}else if(b[i]>=78){
			c[i]=3.0;
		}else if(b[i]>=75){
			c[i]=2.7;
		}else if(b[i]>=72){
			c[i]=2.3;
		}else if(b[i]>=68){
			c[i]=2.0;
		}else if(b[i]>=64){
			c[i]=1.5;
		}else if(b[i]>=60){
			c[i]=1.0;
		}else{
			c[i]=0.0;
		}
	}
	for(i=0;i<n;i++){
		S=S+1.0*a[i]*c[i];
	}
	for(i=0;i<n;i++){
		K=K+a[i];
	}
	G=1.0*S/K;
	printf("%.2lf",G);
	return 0;
}
