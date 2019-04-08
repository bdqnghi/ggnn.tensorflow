void main()
{
   int n,a[100],t,*p=a,*q;
   scanf("%d",&n);
   for(;p<a+n;p++)
   scanf("%d",p);
p=a;q=a+n-1;
for(;p<q;p++,q--)
{  t=*p;
  *p=*q;
*q=t;}
for(p=a;p<a+n-1;p++)
printf("%d ",*p);
printf("%d",*p);
}


  