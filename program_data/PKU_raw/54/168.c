
int allocable(int n,int m,int k)
{
if (m%n==k) return 1;
else
return 0;
}


void main()
{
int n,k,m;
int i;

scanf("%d %d",&n,&k);


m=1;
while(1)
{
m++;
int tmp=m;
for (i=0;i<n;i++)
{
if (allocable(n,tmp,k)) 
{
       tmp=(tmp-k)*(n-1)/n;
}
else
break;

}

if (i==n) break;

}

printf("%d",m);

}