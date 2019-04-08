int main()
{int a,b,c,d,e,f,g=25,h=25,i=25,j=25,k=25,l=25,n;
while(!(g==0&&h==0&&i==0&&j==0&&k==0&&l==0))
{scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
n=3600*(d+12-a)+e*60+f-b*60-c;

if(n!=43200)
printf("%d\n",n);
g=a;
h=b;
i=c;
j=d;
k=e;
l=f;
}
return 0;
}
