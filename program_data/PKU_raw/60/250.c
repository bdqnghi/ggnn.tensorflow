int prime(int k)
{int p=1;
for (int i=2;i<=sqrt(k);i++)
if (k%i==0) {p=0; break;}
return p;
}
main()
{
int n;
int f=1;
scanf("%d",&n);
for (int i=5;i<=n;i++)
if(prime(i)&&prime(i-2))
{printf("%d %d\n",i-2,i); f=0;}
if (f) printf("empty");
}