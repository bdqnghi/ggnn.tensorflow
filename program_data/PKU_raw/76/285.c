struct X{
int a;
int b;
};
int main()
{
int i,j,n,A,B,x[10000]={0,0,0};
struct X q[50000];
scanf("%d",&n);

for(i=0;i<n;i++)
scanf("%d%d",&q[i].a,&q[i].b);

for(i=0;i<n;i++)
{
for(j=q[i].a;j<q[i].b;j++)
x[j]=1;
}

for(A=0;x[A]!=1;A++);
for(B=10000;x[B]!=1;B--);

for(i=A;i<B;i++)
{
if(x[i]==0)
{
printf("no");
return 0;
}
}

printf("%d %d",A,B+1);
return 0;}