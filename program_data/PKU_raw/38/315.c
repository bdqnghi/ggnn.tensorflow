int main()
{
int k,n,i,j;
double x[100],*p,a,s,S;
scanf("%d",&k);
p=(double *)malloc(sizeof(double)*k);

for(i=0;i<k;i++){
scanf("%d",&n);
a=0;
s=0;
for(j=0;j<n;j++){
scanf("%lf",&x[j]);
a+=x[j]/n;}
for(j=0;j<n;j++)
s+=(x[j]-a)*(x[j]-a)/n;
S=sqrt(s);
*(p+i)=S;}
for(i=0;i<k;i++)
printf("%.5f\n",p[i]);
free(p);
return 0;
}