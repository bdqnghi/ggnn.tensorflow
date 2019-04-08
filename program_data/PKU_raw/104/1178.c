
int main(){
	int n,i,e,j,kn,ki,k,l;
	scanf("%d %d",&n,&i);
	if(n<i)
	{
	e=n;
	n=i;
	i=e;
	}
	l=1;
	for (k=1;k<33;k++){
	l=l*2;
	if(l>n){
		kn=k;
		break;
	}
	}
	l=1;
	for (k=1;k<33;k++){
	l=l*2;
	if(l>i){
		ki=k;
		break;
	}
	}
	for(k=0;k<kn-ki;k++){
		n/=2;
	}
	do{
		if(n==i){
			printf("%d",n);
			return 0;
		}
		n/=2;
		i/=2;
	}
		while(1);
	
	}
