int main(){
int n,i,j,k,l;
j=k=0;
char zfc[7];
double h,e,b[39],g[39];
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%s%lf",zfc,&h);
	if(zfc[0]=='m'){
          b[j]=h;
		  j++;
	}else{
		g[k]=h;
		k++;
	}
}
for(i=1;i<=j;i++){
	for(l=0;l<j-i;l++){
		if(b[l]>b[l+1]){
			e=b[l];
			b[l]=b[l+1];
			b[l+1]=e;
		}
	}
}
for(i=1;i<=k;i++){
	for(l=0;l<k-i;l++){
		if(g[l]<g[l+1]){
			e=g[l];
			g[l]=g[l+1];
			g[l+1]=e;
		}
	}
}
for(i=0;i<j;i++){
	printf("%.2lf ",b[i]);
}
for(i=0;i<k-1;i++){
	printf("%.2lf ",g[i]);
}
printf("%.2lf",g[k-1]);
	return 0;
}