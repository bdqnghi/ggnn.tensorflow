int main()
{
 int i,n,sum=0;
 scanf("%d",&n);
 for (i=1;i<=n;i++){
  if (i%7==0) continue;
  if (i%10==7) continue;
  if (i-i%10==70) continue;
 sum+=i*i;
 }
 printf("%d\n",sum);
 return 0;
}
