int prime(int n)
{
    int i=3;
    for(i=2;i<n/2+1;i++)
   { 
   if(n%i==0)
    return(0);
}  
 return(1);
}
main()
{
 int m,n,i,j,k;
 scanf("%d",&m);
 for(i=3;i<(m/2)+1;i++)
  {
    j=prime(i);
    k=m-i;
    n=prime(k);
    if(j!=0&&n!=0)
    printf("%d %d\n",i,k);
  
  }
  getchar();
  getchar();
}
