int main() {
	int i,n,j=0,k=0,l;
	double t;
	char a[100][10];
	double b[100],m[100],f[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s%lf",a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		if(a[i][0]=='m'){
			m[j]=b[i];
			j++;
		}
	}
	for(i=0;i<n;i++){
		if(a[i][0]=='f'){
			f[k]=b[i];
			k++;
		}
	}
    for(i=0;i<j;i++){
		for(l=i+1;l<j;l++){
			if(m[l]<m[i]){
				t=m[i];
				m[i]=m[l];
				m[l]=t;
			}
		}
	}

for(i=0;i<k;i++){
		for(l=i+1;l<k;l++){
			if(f[l]>f[i]){
				t=f[i];
				f[i]=f[l];
				f[l]=t;
			}
		}
	}
	for(i=0;i<j;i++){
		printf("%.2lf ",m[i]);
	}
	for(i=0;i<k-1;i++){
		printf("%.2lf ",f[i]);
               
	}
        printf("%.2lf",f[k-1]);
	return 0;
}