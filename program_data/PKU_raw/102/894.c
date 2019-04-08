int main(){
	int n;
	scanf("%d",&n);
	double a;
	char b[10];
	int i,j=0,q=0,s=0;
	double m[40];
	double f[40];
	for(i=0;i<n;i++){
		m[i]=0.00;
		f[i]=0.00;
		scanf("%s",b);
		scanf("%lf",&a);
		if(b[0]=='m'){
			m[j]=a;
			j++;
		}
		else{
			f[q]=a;
			q++;
		}			
	}
	int k;
	for(k = 1; k <= j; k++){
		double e;
		for(i=0;i<j-k;i++){
			if(m[i] >m[i+1]){
				e = m[i+1];
				m[i+1] = m[i];
				m[i] = e;
			}
		}
	}
	for(k=1; k <= q; k++){
		double g;
		for(i=0;i<q-k;i++){
			if(f[i]<f[i+1]){
				g = f[i+1];
				f[i+1] = f[i];
				f[i] = g;
			}
		}
	}
	for(i=0;i<j;i++){
		if(s==0){
			printf("%.2lf",m[i]);
		    s++;
		}
		else
			printf(" %.2lf",m[i]);
	}
	for(i=0;i<q;i++){
		if(s==0){
			printf("%.2lf",f[i]);
			s++;
		}
		else 
			printf(" %.2lf",f[i]);
	}
    return 0;
}
