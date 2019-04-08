int main()
{
	int a[num],b[num];
	double c[num],C=0,B=0,GPA;
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
		B+=b[i];
	}
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]>=90){
			c[i]=4.0*b[i];
		}
		if(a[i]>=85&&a[i]<=89){
			c[i]=3.7*b[i];
		}
		if(a[i]>=82&&a[i]<=84){
			c[i]=3.3*b[i];
		}
		if(a[i]>=78&&a[i]<=81){
			c[i]=3.0*b[i];
		}
		if(a[i]>=75&&a[i]<=77){
			c[i]=2.7*b[i];
		}
		if(a[i]>=72&&a[i]<=74){
			c[i]=2.3*b[i];
		}
		if(a[i]>=68&&a[i]<=71){
			c[i]=2.0*b[i];
		}
		if(a[i]>=64&&a[i]<=67){
			c[i]=1.5*b[i];
		}
		if(a[i]>=60&&a[i]<=63){
			c[i]=1.0*b[i];
		}
		if(a[i]<60){
			c[i]=0*b[i];
		}
		C+=c[i];
	}
	GPA=C/B;
	printf("%.2lf",GPA);
	return 0;
}
