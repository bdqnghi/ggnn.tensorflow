main()
{
int n,m,i,k,s[1000];
memset(s,0,sizeof(s));
for(k=0;k<1000;k++) 
{scanf("%d %d",&n,&m);
for (i=2;i<=n;i++) 
s[i]=(s[i-1]+m)%i;
if(m==0)
break;
if(n==1)
printf("1\n");
else
printf("%d\n",s[n]+1);
}}