void main()
{int n,m,a[1000],i,t=0,k;
for(;;)
{scanf("%d%d",&n,&m);
if(n==0&&m==0)
break;
k=n;
for(i=1;i<=n;i++)
a[i]=1;
for(i=1;;i++)
{if(i==n+1)
i=1;
if(a[i]==1)
t++;
   if(t==m)
   { a[i]=0;
   k--;
   t=0;
   }
if(k==0)
break;


}
printf("%d\n",i);




}





}