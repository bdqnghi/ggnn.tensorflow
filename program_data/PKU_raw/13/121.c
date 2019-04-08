int main()
{
      int n,i=1,m,j,k;
      scanf("%d",&n);
       int a[n];
      while(i<=n)
      {scanf("%d",&m);
      a[i]=m;
      i++;} 
      int l=1;
      while(l<=n)
      {
                 if(l==1)
                 printf("%d",a[l]);
                 else
                 {
                     j=1;
                     k=0;
                     while(j<l)
                     {if (a[l]==a[j])
                     k=k+1;
                     j++;}
                 if(k==0)
                 printf(" %d",a[l]);
                 }             
      l++;
      }
      getchar();
      getchar();
}