
main()
{
int n,m,i,s=0;
for(;;)
{
scanf("%d %d",&n,&m);
if(n==0&&m==0) break;
if(n==1) printf("%d\n",n) ;
else
{
    s=0; 
for(i=2;i<=n;i++)
s=(s+m)%i;
printf("%d\n",s+1);
}

}

}