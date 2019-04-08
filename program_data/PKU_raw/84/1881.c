int main()
{
	int an[100];
	int a,b,M,m,n,i;
	scanf("%d",&n);
	scanf("%d\n%d",&a,&b);
	if(a>=b){
		M=a;
		m=b;
	}
	else{
		m=a;
		M=b;
	}
	for(i=2;i<n;i++){
		scanf("%d\n",&an[i]);
		if(an[i]>M){
			m=M;
			M=an[i];
		}
		else if(an[i]<M && an[i]>m){
			m=an[i];
		}
	}
	printf("%d\n%d",M,m);
	return 0;
}
