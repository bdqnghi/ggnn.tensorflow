int main()
{
    int f(int n);
    int n,a[10],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
	for(i=0;i<n;i++) 
	printf("%d\n",f(a[i])); 
     return 0;
}
    int f(int n)
{
    int b;
   if(n==1||n==2)
   b=1;
   else 
   b=f(n-1)+f(n-2);
   return(b);
}
    