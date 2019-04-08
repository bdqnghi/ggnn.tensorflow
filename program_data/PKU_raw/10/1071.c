int main()
{
int k,i,j,n,m,temp;
int a[26],g[26];

scanf("%d\n",&k);
for(i=1;i<=k;i++)
scanf("%d",&a[i]);

for(m=1;m<=k;m++)
g[m]=1;

for(n=k-1;n>0;n--)
  for(j=n+1;j<=k;j++)
  {
      if(a[n]>=a[j]&&g[n]-1<g[j])
     {
      g[n]=g[j]+1;
     }                   
  }

for(i=1;i<k;i++)
{for(j=i+1;j<=k;j++)
if(g[i]<g[j]){temp=g[i];g[i]=g[j];g[j]=temp;}    
}
printf("%d",g[1]);
}
