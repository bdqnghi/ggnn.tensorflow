int a[max+10];
int b[max+10];
int maxlen[max+10];
void main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++){
		b[n+1-i]=a[i];
	}
	maxlen[1]=1;
	for(i=2;i<=n;i++){
		int tmp=0;
		for(j=1;j<i;j++){
			if(b[i]>=b[j]){
				if(tmp<maxlen[j]){
					tmp=maxlen[j];
				}
			}
		}
		maxlen[i]=tmp+1;
	}
	int nmax=-1;
	for(i=1;i<=n;i++){
		if(nmax<maxlen[i]){
			nmax=maxlen[i];
		}
	}
	printf("%d",nmax);
}