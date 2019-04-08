int main()
{
	int m,n,k,j,i,l,p;
	scanf("%d",&m);
	for(n=3;n<=m/2;n++){
		p=sqrt(n);
		for(i=2;i<=p;i++){
			if(n%i==0)break;
		}
		if(i>p){
			k=m-n;
			l=sqrt(k);
			for(j=2;j<=l;j++){
					if(k%j==0)break;
			}
			if(j>l)
				printf("%d %d\n",n,k);
					}
			
		
	}
	return 0;
}