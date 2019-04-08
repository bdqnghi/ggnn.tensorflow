int main()
{
 int n,m;
 int i,j,k;
 int a[350];
 while(1)
 {
  scanf("%d %d",&n,&m);
  if(n==0&&m==0)break;
  else
  {
   for(i=0;i<n;i++)
   a[i]=0;
   i=0;
   k=0;          
   for(j=0;j<n;j++)
   {
     if(!a[j]){k++;}
     if(k==m)
     {
      a[j]=1;
      k=0;
      i++;
     }
     if(i==n-1)break;
     if(j==n-1)j=-1;
   }
   for(i=0;i<n;i++)
    if(!a[i])
    printf("%d\n",i+1); 
  }
 }
}