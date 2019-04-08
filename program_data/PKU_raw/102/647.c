int main(){
	int n,i,j,l=0;
	double h[50],t;
	char x[50][30],x1[50][30];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %lf",x[i],&h[i]);
	}
	for(i=n-1;i>0;i--){
		for(j=0;j<i;j++){
			if((x[j][0]=='f')&&(x[j+1][0]=='m')){
				strcpy(x1[j],x[j]),  t=h[j];
				strcpy(x[j],x[j+1]), h[j]=h[j+1];
				strcpy(x[j+1],x1[j]),h[j+1]=t;
			}
		}
	}
	for(i=n-1;i>0;i--){
		for(j=0;j<i;j++){
			if((x[j][0]=='m')&&(x[j+1][0]=='m')){
				if(h[j]>h[j+1]){
					t=h[j];
					h[j]=h[j+1];
					h[j+1]=t;
				}
			}
			if((x[j][0]=='f')&&(x[j+1][0]=='f')){
				if(h[j]<h[j+1]){
					t=h[j];
					h[j]=h[j+1];
					h[j+1]=t;
				}
			}
		}
	}
	for(i=0;i<n;i++){
		if(l==0){
			printf("%.2lf",h[i]);
			l++;
		}else{
			printf(" %.2lf",h[i]);
		}
	}
	return 0;
}