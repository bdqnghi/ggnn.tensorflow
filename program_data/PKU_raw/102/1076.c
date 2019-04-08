int main(){
	int n,i,m=0,w=0,j;
	double h[50],manh[50],womanh[50],g,b;
	char sex[50][10];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s%lf",sex[i],&h[i]);
		if(sex[i][0]=='m'){
			manh[m]=h[i];
			m++;
		}else if(sex[i][0]=='f'){
			womanh[w]=h[i];
			w++;
		}
	}
	for(i=0;i<m-1;i++){
		for(j=0;j<m-1;j++){
			if(manh[j]>manh[j+1]){
				b=manh[j];
				manh[j]=manh[j+1];
				manh[j+1]=b;
			}
		}
	}
	for(i=0;i<w-1;i++){
		for(j=w-2;j>=0;j--){
			if(womanh[j]<womanh[j+1]){
				g=womanh[j];
				womanh[j]=womanh[j+1];
				womanh[j+1]=g;
			}
		}
	}
	for(i=0;i<m;i++){
		printf("%.2lf ",manh[i]);
	}
	for(i=0;i<w-1;i++){
		printf("%.2lf ",womanh[i]);
	}
	printf("%.2lf",womanh[w-1]);
	return 0;
}
