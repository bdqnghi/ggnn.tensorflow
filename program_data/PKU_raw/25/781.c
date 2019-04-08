int a[100];
int main()
{
  a[0]=1;
  int k=1,i,n;
  scanf("%d",&n);
  while(n--)
  {
    for(i=0;i<k;i++)    
        a[i]*=2;    
    for(i=0;i<k;i++)
       if(a[i]>=10)
         {
           a[i+1]+=a[i]/10;
           a[i]%=10;
           if(i==k-1)
             k++;         
         }
  }
  for(i=k-1;i>=0;i--)
     printf("%d",a[i]);
 return 0;
}
