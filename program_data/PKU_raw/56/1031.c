int main()
{
 int m,i,a[5],s;
 scanf("%d",&m);
 for(i=4,s=0;i>=0;i--)
  if(m/(int)pow(10,i)!=0)
   {
    a[s]=m/(int)pow(10,i);
    m=m-a[s]*(int)pow(10,i);
    s++;
   }
 for(;s-1>=0;s--)
  printf("%d",a[s-1]);
 return 0;
}