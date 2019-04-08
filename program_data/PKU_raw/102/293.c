int main(){
	char s[40][7],es[7];
	double h[40];
	int n,i,j,m=0,w=0;
	double e;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %lf",s[i],&h[i]);
	}
	for(i=0;i<n;i++){
		if(s[i][0]=='m'){
			m++;
		}
	}
	for(j=0;j<n;j++){
		for(i=0;i<n-j-1;i++){
			if(s[i][0]=='f'){
				strcpy(es,s[i]);
				strcpy(s[i],s[i+1]);
				strcpy(s[i+1],es);
				e=h[i];
				h[i]=h[i+1];
				h[i+1]=e;
			}
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<m-i-1;j++){
			if(h[j]>h[j+1]){
				e=h[j];
				h[j]=h[j+1];
				h[j+1]=e;
			}
		}
	}
	for(i=0;i<n-m;i++){
		for(j=m;j<n-i-1;j++){
			if(h[j]<h[j+1]){
				e=h[j];
				h[j]=h[j+1];
				h[j+1]=e;
			}
		}
	}
	for(i=0;i<n-1;i++){
		printf("%.2lf ",h[i]);
	}
	printf("%.2lf",h[n-1]);




	return 0;
}