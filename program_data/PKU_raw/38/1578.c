int main()
{
    
	int n;
	scanf("%d",&n);
	int i,j;
	double x,y,z;
	
    struct pp{
		int a;
		float s[100];
	}pl;
	for(i=0;i<n;i++){
		scanf("%d",&pl.a);
		for(j=0;j<pl.a;j++){
			scanf("%f",&pl.s[j]);
		}
		x=0;
		y=0;
		z=0;
		for(j=0;j<pl.a;j++){
			x+=pl.s[j];
		}
		for(j=0;j<pl.a;j++){
			y+=(pl.s[j]-x/pl.a)*(pl.s[j]-x/pl.a);
		}
		z=sqrt(y/pl.a);
		printf("%.5lf\n",z);
	}
	return 0;
}