int main()
{int i,j,m,n;
scanf("%d",&m);
for(i=1;i<=m;i=i+1)
{scanf("%d",&n);
double sum=0,a=1.0,b=1.0,c;
for(j=1;j<=n;j=j+1)
{c=a;a=a+b;b=c;sum=sum+a*1.0/b;}
printf("%.3f",sum);
printf("\n");}
return 0;
}