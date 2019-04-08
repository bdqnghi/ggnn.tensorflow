int main(){
	int n,i,k=0,j=0,m,b;
	scanf("%d\n",&n);
	char s[100];
	double ma[40],f[40],t,a;
	for(i=0;i<n;i++){
		scanf("%s %lf\n",s,&a);
		if(strcmp(s,"male")==0){
			ma[k]=a;
			k++;
		}
		else{
			f[j]=a;
			j++;
		}
	}
	for(m=1;m<k+1;m++){
		for(b=0;b<k+1-m;b++){
			if(ma[b]>ma[b+1]){
				t=ma[b+1];
				ma[b+1]=ma[b];
				ma[b]=t;
			}
		}
	}
    for(m=1;m<j+1;m++){
		for(b=0;b<j+1-m;b++){
			if(f[b]<f[b+1]){
				t=f[b+1];
				f[b+1]=f[b];
				f[b]=t;
			}
		}
	}
	for(i=1;i<=k;i++){
		printf("%.2lf ",ma[i]);
	}
	for(i=0;i<j-1;i++){
		printf("%.2lf ",f[i]);
	}
       printf("%.2lf",f[j-1]);
	return 0;
}

	





	