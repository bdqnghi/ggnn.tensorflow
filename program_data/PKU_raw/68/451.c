int main()
{
	int n;
	int a,b;
	int c;
	int i,l=0;
	scanf("%d", &n);
	for( c=6; c<n+1; c+=2){
		for( a=3; a<c; a+=2){
			l=1;
			for( i=3; i<=sqrt(a); i+=2){
				if( a%i==0) {
					l=0;
					break;
				}
			}
			if( l==0) continue;
			b=c-a;
			for( i=3; i<=sqrt(b); i+=2){
				if( b%i==0){
					l=0;
					break;
				}
			}
			if( l==1){
                printf("%d=%d+%d\n", c, a, b);
                break;
                } 
		}
	}
	return 0;
}
