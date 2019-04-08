

int isPrimeNumber(int p){
	int i,half,isPrime;
	isPrime=1;
	if ( p % 2 == 0)
		return 0;

	
	half = sqrt(p);
	for( i = 3; i <= half; i = i+2 ) {
		if( p % i == 0 ) {
			isPrime = 0;
			break;
		}
	}
	return isPrime;
}





int main(int n)
{
	scanf("%d",&n);
	int k;
	for(k=6;k<=n;k=k+2){
		 
	    int i;         
	    int isPrime1, isPrime2;  

	    for( i = 3; i <= k/2; i = i + 2 ){
			isPrime1 = isPrimeNumber(i);
		    isPrime2 = isPrimeNumber(k-i);
		    if( isPrime1 && isPrime2 )
			{
			    printf("%d=%d+%d\n",k,i,k-i);
			    break;
			}
		}
	}
	return 0;
}