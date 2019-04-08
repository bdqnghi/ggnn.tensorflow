int main(){
	int n=0,i=0,j=0,k=0,m=0;
	double e=0,f=0;
	double g[50];
	double a[50];
	struct ren{
		char s[10];
		double h;
	}
	rens[50];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %lf",rens[i].s,&rens[i].h);
	}
	j=0;
	k=0;
	for(i=0;i<n;i++){
		if(rens[i].s[0]=='m'){
			g[j]=rens[i].h;                                                                    
			j++;
		}
		else{
			a[k]=rens[i].h;
			k++;
		}
	}
	for(m=1;m<=j;m++){
		for(i=0;i<j-m;i++){
			if(g[i]>g[i+1]){
				e=g[i+1];
				g[i+1]=g[i];
				g[i]=e;
			}
		}
	}
	for(m=1;m<=k;m++){
		for(i=0;i<k-m;i++){
			if(a[i]>a[i+1]){
				f=a[i];
				a[i]=a[i+1];
				a[i+1]=f;
			}
		}
	}
	printf("%.2lf",g[0]);
	for(i=1;i<j;i++){
		printf(" %.2lf",g[i]);
	}
	for(i=k-1;i>=0;i--){
		printf(" %.2lf",a[i]);
	}
	return 0;

}