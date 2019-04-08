int main()
{
char a[5]={'m','a','l','e'};
char b[7]={'f','e','m','a','l','e'};
char c[7];
int n,i,j,k,l;
float sz[40],nz[40],d,e,f;
scanf("%d",&n);
k=l=0;
for(i=0;i<n;i++){
    scanf("%s %f",c,&d);
	//scanf("%f",&d);
	if(c[0]==a[0]){
		sz[k]=d;
		k++;
	}
	else{
		nz[l]=d;
		l++;
	}
}
for(i=0;i<k;i++){
	for(j=i+1;j<k;j++){
		if(sz[i]>sz[j]){
			e=sz[i];
			sz[i]=sz[j];
			sz[j]=e;
		}
	}
}
for(i=0;i<l;i++){
	for(j=i+1;j<l;j++){
		if(nz[i]<nz[j]){
			f=nz[i];
			nz[i]=nz[j];
			nz[j]=f;
		}
	}
}
for(i=0;i<k;i++){
	printf("%.2f ",sz[i]);
}
for(j=0;j<l-1;j++){
	printf("%.2f ",nz[j]);
}
printf("%.2f",nz[l-1]);




return 0;
}