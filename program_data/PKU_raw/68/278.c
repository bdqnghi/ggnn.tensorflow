int prime(int a){
	int i;
	int isprime=1;
	if (a == 3 ||a == 5 || a == 7)
		return isprime;
	else{
		for(i=3;i<=(int)sqrt(a);i+=2){
			if (a%i==0){
				isprime=0;
				return isprime;
				break;
			}
		}
	}
	return isprime;
}

int main(int argc, char* argv[])
{
	int n,i,j;
	scanf("%d",&n);
	for (i=6;i<=n;i+=2){
		for (j=3;j<=i/2;j+=2){
			if(prime(j)+prime(i-j)==2){
				printf ("%d=%d+%d\n",i,j,i-j);
				break;
			}
		}
	}
	return 0;
}
