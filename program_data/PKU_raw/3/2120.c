int main(int argc, char *argv[])
{
  int n,k,i=0,j,x=0;
  scanf("%d%d",&n,&k);
  int a[n];
  for(;i<=n-1;i++)
  {scanf("%d",a+i);
  for(j=0;j<=i-1;j++)
  if(a[i]+a[j]==k) {x=1;break;}
  if(x==1) {printf("yes");break;}
  }
  if(x==0) printf("no");
  return 0;
}
