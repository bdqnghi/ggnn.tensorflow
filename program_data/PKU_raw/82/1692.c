int main()
{
 int n,a,b,i,j,k;
 scanf("%d",&n);
 j=0;
 k=0;
 for(i=0;i<n;i++)
 {
  scanf("%d %d",&a,&b);
  if(a>=90&&a<=140)
   {
    if(b>=60&&b<=90)
     {j=j+1;
       if(j>=k)
       k=j;
     }
    else j=0;
   }
   else j=0;
  }
 printf("%d",k);
 return 0;
}