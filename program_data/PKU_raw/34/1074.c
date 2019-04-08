int main()
{
 int n;
 scanf("%d", &n);
 if(n!=1){
	 while(n != 1)
{
 if(n%2==1)
 {   printf("%d*3+1=%d\n", n,n*3+1);
     n=n*3+1; 
 }
 else 
  {printf("%d/2=%d\n",n,n/2 );

   n = n/2; 
 }
  }

	 printf("End\n"); }
 else if (n=1){printf("End\n");}

 return 0; 

}