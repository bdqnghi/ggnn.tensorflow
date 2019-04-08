void main()
{int j,b,gede(int);
	scanf("%d",&b);
for (j=6;j<=b;j=j+2)
gede(j);
}
int gede(int n)
{
int i,d,sushu(int);
d=n/2;
for (i=3;i<=d;i=i+2)
         if (sushu(i)==1&&sushu(n-i)==1)
		 {printf("%d=%d+%d\n",n,i,n-i);
		 break;}
return(0);
		 }
int sushu(int a)
{int i,b,ok;
ok=1;
b=sqrt(a)+1;
for (i=2;i<=b;i++)
if (a%i==0)
    ok=0;
return(ok);
}
