int main(){
    int n,i,fea=0,ma=0,k;
	double shengao[50],fe[50],m[50],e;
	char sex[50][8];
	scanf("%d",&n);
	for(i=0;i<n;i++){
        scanf("%s %lf",sex[i],&shengao[i]);
		if(strcmp(sex[i],"male")==0){
            ma++;
			m[ma-1]=shengao[i];
		}else{
			fea++;
			fe[fea-1]=shengao[i];
		}
	}
    for(k=1;k<=ma;k++){
        for(i=0;i<ma-k;i++){
		    if(m[i]>m[i+1]){
				e=m[i+1];
				m[i+1]=m[i];
				m[i]=e;
			}
		}
    }
	for(k=1;k<=fea;k++){
        for(i=0;i<fea-k;i++){
		    if(fe[i]<fe[i+1]){
				e=fe[i+1];
				fe[i+1]=fe[i];
				fe[i]=e;
			}
		}
    }
	for(i=0;i<ma;i++){
		printf("%.2lf ",m[i]);
	}
	for(i=0;i<fea;i++){
		if(i==fea-1){
			printf("%.2lf",fe[i]);
		}else{
	    	printf("%.2lf ",fe[i]);
		}
	}
	return 0;
}