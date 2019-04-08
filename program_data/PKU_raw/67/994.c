int main()
{
int n,i;
double a,b,q[1000],w[1000];
scanf("%d",&n);
scanf("%lf%lf",&a,&b);
a=b/a;
for(i=0;i<n-1;i++)
{scanf("%lf%lf",&q[i],&w[i]);
q[i]=w[i]/q[i];}
for(i=0;i<n-1;i++)
{if(q[i]-a>0.05){printf("better\n");}
else if(a-q[i]>0.05){printf("worse\n");}
else printf("same\n");}
return 0;
}