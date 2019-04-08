int main()
{
	int a[10000];
	int n,w,m;
	int i,j,k,t,e,x,y;
	scanf("%d",&w);
	n=0;
	for(i=0;i<w;i++){
		scanf("%d",&a[i]);
	}
	for(k=0;k<w;k++){
		if((a[k]%2)!=0){
			n++;
		}else{
			a[k]=0;
		}
	}
	for(e=w-1;e>=0;e--){
		for(j=0;j<e;j++){
			if(a[j]>a[j+1]){
				m=a[j+1];
				a[j+1]=a[j];
				a[j]=m;
			}
		}
	}
	for(t=w-n;t<w-1;t++){
		printf("%d,",a[t]);
	}
	printf("%d",a[w-1]);



	return 0;
}


