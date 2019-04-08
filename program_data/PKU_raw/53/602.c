void main()
{
 int a[1000],b[1000],i,j,n,t;
 int *p,*q;
 p=a;
 q=b;
 scanf("%d",&n);
 for(i=0;i<=n-1;i++)
  scanf("%d",p+i);
 t=0;
 for(i=0;i<=n-1;i++)
  {
  for(j=0;j<=i-1;j++)
   if(*(p+i)==*(p+j)) break;
  if(j>i-1) 
   {
    *(q+t)=*(p+i);
    t++;
   }
  }
  for(i=0;i<=t-2;i++)
   printf("%d,",*(q+i));
  printf("%d",*(q+t-1));

}