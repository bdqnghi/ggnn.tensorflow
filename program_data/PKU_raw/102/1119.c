int main(){
	char sex[10];
	double shengao;
	int n,i,male=0,female=0;
	double m[40],f[40];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %lf",sex,&shengao);
		if(sex[0]=='m') {
			m[male++]=shengao;//???
		}
		if(sex[0]=='f'){
			f[female++]=shengao;//???
		}
	}

	int k;
	double e;
	for(k=1;k<=male;k++){//???????
		for(i=male-1;i>=k;i--){
			if(m[i]<m[i-1]){
				e=m[i];
				m[i]=m[i-1];
				m[i-1]=e;
			}
		}
	}


	for(k=1;k<=female;k++){
		for(i=0;i<female-k;i++){
			if(f[i]<f[i+1]){
				e=f[i+1];
				f[i+1]=f[i];
				f[i]=e;
			}
		}
	}


	for(k=0;k<male;k++)
		printf("%.2lf ",m[k]);
	for(k=0;k<female;k++)
	{
		if(k<female-1)
			printf("%.2lf ",f[k]);
		else
			printf("%.2lf",f[k]);
	}

return 0;
}