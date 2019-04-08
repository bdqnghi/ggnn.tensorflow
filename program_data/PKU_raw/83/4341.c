int main(){
	int n, a[110], b[110];
	scanf("%d", &n);
	int i;
	for(i=0;i<n;i++){
		scanf("%d", &(a[i]));
	}
	for(i=0;i<n;i++){
		scanf("%d", &(b[i]));
	}
	double gpa[110];
	for(i=0;i<n;i++){
		if(b[i]>=90&&b[i]<=100){
			gpa[i]=4.0;
		}else if(b[i]>=85&&b[i]<=89){
			gpa[i]=3.7;
		}else if(b[i]>=82&&b[i]<=84){
			gpa[i]=3.3;
		}else if(b[i]>=78&&b[i]<=81){
			gpa[i]=3.0;
		}else if(b[i]>=75&&b[i]<=77){
			gpa[i]=2.7;
		}else if(b[i]>=72&&b[i]<=74){
			gpa[i]=2.3;
		}else if(b[i]>=68&&b[i]<=71){
			gpa[i]=2.0;
		}else if(b[i]>=64&&b[i]<=67){
			gpa[i]=1.5;
		}else if(b[i]>=60&&b[i]<=63){
			gpa[i]=1.0;
		}else if(b[i]<=59){
			gpa[i]=0;
		}
	}
	int r;
    double xfjd[110];
	for(r=0;r<n;r++){
		xfjd[r]=gpa[r]*(1.0*a[r]);
	}
	int e;
	double x=0.0;
	for(e=0;e<n;e++){
		x=x+xfjd[e];
	}
	int m, xuefen=0;
	for(m=0;m<n;m++){
		xuefen=xuefen+a[m];
	}
	double result;
	result=x/(1.0*xuefen);
	printf("%.2f\n", result);
	return 0;
}