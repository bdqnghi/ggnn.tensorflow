int main(){
	int n,i,j=0,q=0;
        scanf("%d",&n);
	char sex[7];
	double h[41],mh[41],fh[41];
	double cs,sf;
	for(i=0;i<n;i++){
		scanf("%s %lf",sex,&h[i]);
		if(sex[0]=='m'){
			mh[j]=h[i];
			j++;
		}
		else{
			fh[q]=h[i];
			q++;
		}
	}
	for(int k=0;k<j;k++){
		for(int m=0;m<j;m++){
			if(mh[m]>mh[m+1]){
				cs=mh[m];
				mh[m]=mh[m+1];
				mh[m+1]=cs;
			}
		}
	}
	for(int r=1;r<=j;r++){
		printf("%.2lf ",mh[r]);
	}
	for(int l=0;l<q;l++){
		for(int d=0;d<q;d++){
			if(fh[d]<fh[d+1]){
				sf=fh[d];
				fh[d]=fh[d+1];
				fh[d+1]=sf;
			}
		}
	}
	for(int o=0;o<q-1;o++){
		printf("%.2lf ",fh[o]);
	}
        printf("%.2lf",fh[q-1]);
	return 0;
}
