

int main()
{
	 int num,i,s[100];
	 int j,k,l,p;
	 int max(int a,int b,int c), min(int a,int b,int c);

	 scanf("%d\n",&num); 

	 for(i=0;i<=num-1;i++)
	 {
	
		  scanf("%d\n",&s[i]);
	 }

	 k=s[0];
	 j=s[1];

	 for(i=2;i<=num-1;i++) 
	 {
	      
	      l=min(k,j,s[i]);
		  p=k;
		  k=max(k,j,s[i]);
		  j=j+p+s[i]-k-l;
	 }
	
	

	 printf("%d\n%d",k,j);

     return 0;
}

max( int a, int b, int c)
{
	  int m;
	  m=a>b?a:b;
	  m=m>c?m:c;
	  return m;
} 

min( int a,int b,int c)
{
	  int s;
	  s=a>b?b:a;
	  s=s>c?c:s;
	  return s;
}
	
