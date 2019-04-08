int a(int n)
{
int i,j,m,q=0;
if (n%2==0&&n!=2) q=1;
m=sqrt(n);
for(i=3;i<=m;i+=2)
{
if (n%i==0) q=1;
}
return(q);
}

int main()
{
int n,i,j;
scanf("%d",&n);
for(i=6;i<=n;i+=2)
{
for(j=2;j<n;j++)
{
if(a(j)==0&&a(i-j)==0) 
{printf("%d=%d+%d\n",i,j,i-j);
break;}
}
}
}

