int main(){
    int n;
	double s,c[10],m=0,j=0;
	int a[10],b[10];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		j=j+a[i];
	}
	for(int t=0;t<n;t++){
		scanf("%d",&b[t]);
		if(b[t]>=90){
			c[t]=4.0*(a[t]);
		}else if(b[t]>=85){
			c[t]=3.7*(a[t]);
		}else if(b[t]>=82){
			c[t]=3.3*(a[t]);
		}else if(b[t]>=78){
			c[t]=3.0*(a[t]);
		}else if(b[t]>=75){
			c[t]=2.7*a[t];
		}else if(b[t]>=72){
			c[t]=2.3*a[t];
		}else if(b[t]>=68){
			c[t]=2.0*a[t];
		}else if(b[t]>=64){
			c[t]=1.5*a[t];
		}else if(b[t]>=60){
			c[t]=1.0*a[t];
		}else{
			c[t]=0;
		}
		m=m+c[t];

      
	}
	s=m/j;
	printf("%.2lf",s);

	return 0;   
}
