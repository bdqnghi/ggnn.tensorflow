main()
{
  int n,k,i,j,a[100000],*p,b;
  scanf("%d",&n);
  p=a;
  for(i=0;i<n;i++)
    scanf("%d",p++);
  p=a;
  scanf("%d",&k);
  for(i=0;i<n;i++)
  {
    if(*(p+i)!=k)  {printf("%d",*(p+i)); b=i;break;}  
  }
  for(i=b+1;i<n;i++)
  {
    if(*(p+i)!=k)  {printf(" %d",*(p+i));}  
  }
}
