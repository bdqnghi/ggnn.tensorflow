int main()
{
	double sz[100],a[100],b[100];
	int i,j,k,n;
	double s[100],S[100],d;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%lf\n",&sz[i]);
	}
	for(i=0;i<n;i++){
		S[i]=0;
		if(sz[i]>2){

		    for(j=2;j<sz[i];j++){
				a[0]=1;
			a[1]=2;
			a[j]=a[j-1]+a[j-2];
			b[0]=2;
			b[1]=3;
			b[j]=b[j-1]+b[j-2];
			s[j]=b[j]/a[j];
			S[i]=S[i]+s[j];

			
		}
		d=S[i]+3.5;
        printf("%.3lf\n",d);
		}
		if(sz[i]==2){
			printf("3.500\n");
		}
		if(sz[i]==1){
			printf("2.000\n");
		}
	}
	return 0;
	
}