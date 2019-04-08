int main(){
	double hi[40],ghi[40],bhi[40];
	double h;
	char sex[40][7];
	int n,i,g,b,k;
	g=0;
	b=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %lf",sex[i],&hi[i]);
		if(sex[i][0]=='f'){
			ghi[g]=hi[i];
			g++;
		}else{
			bhi[b]=hi[i];
			b++;
		}
	}
	for(k=1;k<g;k++){
		for(i=0;i<g-k;i++){
			if(ghi[i]<ghi[i+1]){
				h=ghi[i];
				ghi[i]=ghi[i+1];
				ghi[i+1]=h;
			}
		}
	}
	for(k=1;k<b;k++){
		for(i=0;i<b-k;i++){
			if(bhi[i]>bhi[i+1]){
				h=bhi[i];
				bhi[i]=bhi[i+1];
				bhi[i+1]=h;
			}
		}
	}
	for(i=0;i<b;i++){
		printf("%.2lf ",bhi[i]);
	}
	for(i=0;i<g;i++){
		printf("%.2lf",ghi[i]);
		if(i<g-1){
			printf(" ");
		}
	}
	return 0;
}