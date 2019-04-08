
 int main()
 {
	 int n;
	 scanf("%d",&n);
	 int number=1;      
	 int primes[100000]; 
	 int i, j;         
	 primes[0] = 2;    
	 for( i = 3; i <= n; i = i + 2 )
	 {      
	 	 for(j=0; primes[j]*primes[j]<i; j++) 
		 {
			 if( i%primes[j]==0 ) 
				 break;
		 }
		 if( primes[j]*primes[j]>i) 
		 {
			 primes[number]=i;
		     number++;
		 }
	 }
	 int k,l,m,p;
	 for (k=6;k<=n;k=k+2)
	 {
		 for (l=0;primes[l]<=k/2;l++)
		 {
			 m=k-primes[l];
			 for (p=0;primes[p]*primes[p]<k;p++)
			 {
				 if (m%primes[p]==0)
				 {
					 break;
				 }
			 }
			 if (primes[p]*primes[p]>k)
			 {
				 printf("%d=%d+%d\n",k,primes[l],m);
				 break;
			 }
		 }
	 }
	 return 0;
 }