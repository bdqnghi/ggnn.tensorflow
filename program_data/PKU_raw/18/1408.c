int main()
{
 int n,i,j,k,l,s,m,a[10000];
 int *p,*p1,*p2,*p3;
 scanf("%d",&n);
 p=a;
 for(l=0;l<n;l++)
 {
  for(i=0;i<n;i++)
  {p1=p+100*i;
   for(j=0;j<n;j++)
   {p2=p1+j;
    scanf("%d",p2);}}
  s=0;
  for(k=0;k<n-1;k++)
  {for(i=0;i<n;i++)
   {p1=p+i*100;
    m=*p1;
    for(j=0;j<n;j++)
    {p2=p1+j;
     if(j>k)
      if(*p2<m) m=*p2;}
    for(j=0;j<n;j++)
    {p2=p1+j;
     *p2=*p2-m;}}
   for(i=0;i<n;i++)
   {p1=p+i;
    m=*p1;
    for(j=0;j<n;j++)
    {p2=p1+j*100;
     if(j>k)
      if(*p2<m) m=*p2;}
    for(j=0;j<n;j++)
    {p2=p1+j*100;
     *p2=*p2-m;}}
   s=s+*(p+101*(k+1));}
  printf("%d\n",s);}
   

   
}

