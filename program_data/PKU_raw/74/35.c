
char ishw(int m){
	int p=1,m0=m;
	while(m0>9){
		m0/=10;
		p*=10;
	}
	while(m>=1&&p>0){
		if((m%10)!=m/p) return 0;
		m=(m%p)/10;
		p/=100;
	}
	return 1;
}

char isprime(int m){
	int p,sm;
	if(!(m%2)||m==1) return 0;
	sm=sqrt(m);
	for(p=3;p<=sm;p+=2)
		if(!(m%p)) break;
	return (p>sm);
}


void main(){
	int m,n,c=0;
	scanf("%d%d",&m,&n);
	for(;m<=n;m++)
		if(isprime(m)&&ishw(m)){
			if(c) putchar(','); else c=1;
			printf("%d",m);
		}
	if(!c) puts("no");
}
