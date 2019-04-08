int main(){
	int a,b,c,d=0,l=0,o,p,w;
	double h;
	char e[42][10];
	double f[42],m[42],g[42];
	scanf("%d",&a);
	for(b=0;b<a;b++){
		scanf("%s%lf",e[b],&g[b]);
		w=strcmp(e[b],"male");
		if(w==0){
			m[d]=g[b];
			d++;
		}
		else{
			f[l]=g[b];
			l++;
		}
	}
	for(o=0;o<d;o++){
		for(p=o+1;p<d;p++){
			if(m[p]<m[o]){
				h=m[o];
				m[o]=m[p];
				m[p]=h;
			}
		}
	}
	for(o=0;o<l;o++){
		for(p=o+1;p<l;p++){
			if(f[p]>f[o]){
				h=f[o];
				f[o]=f[p];
				f[p]=h;
			}
		}
	}
	for(o=0;o<d;o++){
		printf("%.2lf ",m[o]);
	}
	for(o=0;o<(l-1);o++){
		printf("%.2lf ",f[o]);
	}
	printf("%.2lf",f[l-1]);
	return 0;
}