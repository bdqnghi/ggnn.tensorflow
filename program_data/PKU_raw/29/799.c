int main()
{
int i,a[1000];
a[0]=1;a[1]=1;
for(i=2;i<900;i++)a[i]=a[i-1]+a[i-2];
int n,t,j;
float sum;
scanf("%d\n",&n);
for(j=0;j<n;j++)
  {
  sum=0;
  scanf("%d",&t);
  for(i=0;i<t;i++)sum=sum+(float)(a[i+2])/(float)(a[i+1]);
  printf("%.3f\n",sum); 
  }
}
