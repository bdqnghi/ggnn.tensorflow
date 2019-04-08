int nax(int x)
{int a,b,c,d,e,f;
 a=x/10000;
 b=(x-10000*a)/1000;
 c=(x-10000*a-1000*b)/100;
 d=(x-10000*a-1000*b-100*c)/10;
 e=x-10000*a-1000*b-100*c-10*d;
if(a!=0)f=10000*e+1000*d+100*c+10*b+a;
else if(b!=0)f=1000*e+100*d+10*c+b;
else if(c!=0)f=100*e+10*d+c;
else if(d!=0)f=10*e+d;
else f=e;
if(x==f)return(1);else return(0);}
int max(int x)
{int j,k;
k=x/2;for(j=2;j<=k;j++)if(x%j==0)break;
if(j>=k)return(1);else return(0);}
void main()
{
int m,n,i,k=0;
scanf("%d%d",&m,&n);
for(i=m;i<=n;i++)if(max(i)==1&&nax(i)==1){printf("%d",i);k++;break;}
for(i=i+1;i<=n;i++)if(max(i)==1&&nax(i)==1){printf(",%d",i);k++;};if(k==0)printf("no");
}