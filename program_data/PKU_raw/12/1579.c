int main()
{int n,m,k;
static int a[16];
while(scanf("%d",&a[0])&&a[0]!=-1)
{for(k=1;k<=15;k++)
{scanf(" %d",&a[k]);
if(a[k]==0)
break;}
n=0;
for(k=0;a[k]!=0;k++)
for(m=0;a[m]!=0;m++)
if(a[m]==2*a[k])
{n++;break;}
printf("%d\n",n);}
return 0;
}
