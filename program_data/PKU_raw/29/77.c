int main()
{
int m,i,k,n[100];
double sum[100]={0},a=2,b=1,c;
scanf("%d",&m);
for(i=0;i<m;i++)
{
scanf("%d",&n[i]);
a=2;b=1;
for(k=0;k<n[i];k++){
sum[i]+=(a/b);
c=a;
a=a+b;
b=c;
}
}
for(i=0;i<m;i++){
printf("%.3lf\n",sum[i]);
}

return 0;
}