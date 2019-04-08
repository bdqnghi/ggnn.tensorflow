int main(){
	int i,n,a[40];
	double hei[40],nan[40],nv[40];
	char b[7];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s%lf",b,&hei[i]);
		if(b[0]=='m'){
			a[i]=1;
		}
		else {
			a[i]=0;
		}
	}
	int k,l;
	k=0;
	l=0;
	for(i=0;i<n;i++){
		if(a[i]==1){
			nan[k]=hei[i];
			k++;
		}
		else {
			nv[l]=hei[i];
			l++;
		}
	}
	int x,y;
	double e;
	for(x=1;x<k;x++){
		for(y=0;y<k-x;y++){
			if(nan[y]>nan[y+1]){
			e=nan[y];
			nan[y]=nan[y+1];
			nan[y+1]=e;
			}
		}
	}
	for(x=0;x<k;x++){
		printf("%.2lf ",nan[x]);
	}
    for(x=1;x<l;x++){
		for(y=0;y<l-x;y++){
			if(nv[y]<nv[y+1]){
			e=nv[y];
			nv[y]=nv[y+1];
			nv[y+1]=e;
			}
		}
	}
	for(x=0;x<l;x++){
		if(x!=(l-1)){
			printf("%.2lf ",nv[x]);
		}
		else printf("%.2lf",nv[x]);
	}
	return 0;
}