int main(){
	int n,i,j,t=0,l=0;
	double h[40],m[40],f[40];
	char s[40][7];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s%lf",s[i],&h[i]);
		if(s[i][0]=='m'){
			m[t]=h[i];
			t++;
		}else{
			f[l]=h[i];
			l++;
		}
	}
	for(i=0;i<t-1;i++){
		for(j=t-1;j>i;j--){
			if(m[j]<m[j-1]){
				double p=m[j];
				m[j]=m[j-1];
				m[j-1]=p;
			}
		}
	}
	for(i=0;i<t;i++){
		printf("%.2lf ",m[i]);
	}
	for(i=0;i<l-1;i++){
		for(j=l-1;j>i;j--){
			if(f[j]>f[j-1]){
				double q=f[j];
				f[j]=f[j-1];
				f[j-1]=q;
			}
		}
	}
	for(i=0;i<l-1;i++){
		printf("%.2lf ",f[i]);
	}
	for(i=l-1;i<l;i++){
		printf("%.2lf",f[i]);
	}
	return 0;
}