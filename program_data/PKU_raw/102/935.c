int main(){
	int n;
	scanf("%d",&n);
	struct point{
		char x[10];
		double y;
	}b[40];
	int i;
	for (i=0;i<n;i++){
		scanf("%s%lf",b[i].x,&b[i].y);
	}
	int p=0;
	for(i=0;i<n;i++){
		if(strcmp(b[i].x,"male")==0){
			p+=1;
		}
	}
	double d[40];
	int k=0;
	for(i=0;i<n;i++){
		if(strcmp(b[i].x,"male")==0){
			d[k]=b[i].y;
			k+=1;
		}
	}
	double m;
	for(k=1;k<p;k++){
		for(i=0;i<p-k;i++){
			if(d[i]>d[i+1]){
				m=d[i];
				d[i]=d[i+1];
				d[i+1]=m;
			}
		}
	}
	for(i=0;i<p;i++){
		printf("%.2lf ",d[i]);
	}
	double e[40];
	int r=0;
	for(i=0;i<n;i++){
		if(strcmp(b[i].x,"female")==0){
			e[r]=b[i].y;
			r++;
		}
	}
	for(k=1;k<n-p;k++){
		for(i=0;i<n-p-k;i++){
			if(e[i]<e[i+1]){
				m=e[i];
				e[i]=e[i+1];
				e[i+1]=m;
			}
		}
	}
	for(i=0;i<n-p-1;i++){
		printf("%.2lf ",e[i]);
	}
	printf("%.2lf",e[n-p-1]);
	return 0;
}