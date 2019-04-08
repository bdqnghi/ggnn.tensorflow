int main()
{
	int N,i,j,k,m,g,f,n=0,h=0;
	int a[500];
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	for(k=1;k<N;k++){
		for(j=0;j<=N-k;j++){
			if(a[j+1]<a[j]){
				m=a[j+1];
				a[j+1]=a[j];
				a[j]=m;
			}
		}
	}
	for(g=0;g<N;g++){
		if(a[g]%2!=0){
			n++;
		}
	}
	for(f=0;f<N;f++){
		if(a[f]%2!=0){
			h++;
			if(h<n){
				printf("%d,",a[f]);
			}
			if(h==n){
				printf("%d",a[f]);
			}
		}
	}
	return 0;
}

