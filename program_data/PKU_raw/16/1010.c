int main()
{
	 int n,i,j,k,w,l;
	 scanf("%d",&n);
	 if(n-10<0) printf("%d",n);
	 else
	 {
		 if(n-100<0)
		 {
			 i=n%10;j=(n-i)/10;
		     printf("%d%d",i,j);
		 }
		 else
		 {
			 if(n-1000<0) 
			 {
				 i=n%10;j=((n-i)/10)%10;k=(n-i-10*j)/100;printf("%d%d%d",i,j,k);
			 }
			 else
			 {
				 if(n-10000<0)
				 {
					 i=n%10;j=((n-i)%100)/10;k=((n-i-10*j)%1000)/100;w=(n-i-10*j-100*k)/1000;
					 printf("%d%d%d%d",i,j,k,w);
				 }
			 }

		 }
	 }
	 return 0;
}