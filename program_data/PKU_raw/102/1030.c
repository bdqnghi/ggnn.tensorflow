int main(){
	int n,i,k=0,s=0,g;
	char x[40][10]={0};
	double q,y[40]={0},m[40]={0},f[40]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",x[i]);
		scanf("%lf",&y[i]);
	}
	for(i=0;i<n;i++){
		if(x[i][0]=='f'){
			f[s]=y[i];
			s++;
		}
		if(x[i][0]=='m'){
			m[k]=y[i];
			k++;
		}
	}
	for(i=1;i<k;i++){
		for(g=0;g<k-1;g++){
			if(m[g]>m[g+1]){
				q=m[g];
				m[g]=m[g+1];
				m[g+1]=q;
			}
		}
	}
	for(i=1;i<s;i++){
		for(g=0;g<s-1;g++){
			if(f[g]<f[g+1]){
				q=f[g];
				f[g]=f[g+1];
				f[g+1]=q;
			}
		}
	}
	for(i=0;i<k;i++){
		printf("%.2lf ",m[i]);
	}
	for(i=0;i<s-1;i++){
		printf("%.2lf ",f[i]);
	}
	printf("%.2lf",f[s-1]);
	return 0;
}