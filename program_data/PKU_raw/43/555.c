int prime(int n)
{
int i;
double k=sqrt((double)n);
for(i=2;i<=k;i++)
if(n%i==0) break;
if(i>k) return 1;
else return 0;
}
int main()
{
int m;
scanf("%d",&m);
int i;
for(i=3;i<=m/2;i+=2)
if(prime(i)&&prime(m-i)) {printf("%d %d\n",i,m-i);continue;}
return 0;
}