/* Note:Your choice is C IDE */
void main()
{
int n,k,m,a,b;
scanf("%d %d",&n,&k);
for(a=n+k;a>0;a++)
{
   m=a;
   for(b=1;(m-k)%n==0&&b<=n;b++)
   {m=m-(m-k)/n-k;}
   if(b==n+1&&m>0) break;
}  
printf("%d",a);
}
