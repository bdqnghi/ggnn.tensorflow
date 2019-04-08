int prime (int p);
int main ()
{
	int n,k,i;
	scanf("%d",&n);  
	for (i=6;i<=n;i+=2){
		for (k=3;k<=(n/2);k+=2){
			if(prime(k)+prime(i-k)==2){
				printf("%d=%d+%d\n",i,k,i-k);
				break ;
			}
		}
	}
	return 0;
}
int prime (int p){
	int i;
	int isprime=1;
	if (p==3||p==5||p==7){
		return isprime;
	}
	else{
		for(i=3;i<=sqrt(p);i+=2)
		{
			if(p%i==0){
				isprime=0;
				return isprime;
				break;
			}
		}
	}
	return isprime;
}