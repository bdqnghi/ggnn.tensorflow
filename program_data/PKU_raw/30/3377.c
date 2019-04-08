main()
{
int n,i,s=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
if(i%7!=0&&i%10!=7&&i/10!=7)
s+=i*i;
printf("%d",s);
}