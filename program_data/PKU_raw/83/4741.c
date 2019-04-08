int main(){
	int n,i,y,a[10],b[10];
	double t,s,x,c[10];
	s=0.00;
	y=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
    for(i=0;i<n;i++){
        if(b[i]>=90&&b[i]<=100){
			t=4.0;
		}else if(b[i]>=85){
			t=3.7;
		}else if(b[i]>=82){
			t=3.3;
		}else if(b[i]>=78){
			t=3.0;
		}else if(b[i]>=75){
			t=2.7;
		}else if(b[i]>=72){
			t=2.3;
		}else if(b[i]>=68){
			t=2.0;
		}else if(b[i]>=64){
			t=1.5;
		}else if(b[i]>=60){
			t=1.0;
		}else{
			t=0.0;
		}
		c[i]=t*a[i];
		s+=c[i];
		y+=a[i];
	}
	x=s/y;
	printf("%.2lf",x);
	return 0;
}
