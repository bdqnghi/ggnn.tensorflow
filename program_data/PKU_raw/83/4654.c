int main(){
	int n,i,j,y;
	double x,s;
	x=0;
	y=0;
	i=0;
	s=0;
	scanf("%d",&n);
	int a[10];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	double b[10];
	j=0;
	for(j=0;j<n;j++){
		scanf("%lf",&b[j]);
	}
	j=0;
	for(j=0;j<n;j++){
		if(b[j]<=100&&b[j]>=90){
			b[j]=4.0;
		}else if(b[j]<=89&&b[j]>=85){
			b[j]=3.7;
		}else if(b[j]<=84&&b[j]>=82){
			b[j]=3.3;
		}else if(b[j]<=81&&b[j]>=78){
			b[j]=3.0;
		}else if(b[j]<=77&&b[j]>=75){
			b[j]=2.7;
		}else if(b[j]<=74&&b[j]>=72){
			b[j]=2.3;
		}else if(b[j]<=71&&b[j]>=68){
			b[j]=2.0;
		}else if(b[j]<=67&&b[j]>=64){
			b[j]=1.5;
		}else if(b[j]<=63&&b[j]>=60){
			b[j]=1.0;
		}else if(b[j]<=59){
			b[j]=0;
		}
	}
	i=0;
	for(i=0;i<n;i++){
		j=i;
		x=x+b[j]*a[i];
	}
	i=0;
	for(i=0;i<n;i++){
		y=y+a[i];
	}
	s=x/y;
	printf("%.2lf",s);
	return 0;
}