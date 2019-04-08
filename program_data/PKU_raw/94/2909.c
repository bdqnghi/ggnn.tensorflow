int main ()
{
int sz[500];
int o[500];
int m,n,i,j=0,b;
scanf("%d\n",&n);
for(i=0;i<n;i++)
{scanf("%d",&sz[i]);}
m=0;
for(i=0;i<n;i++)
{
  if(sz[i]%2!=0)
  {
  o[j]=sz[i];
j=j+1;
m=m+1;
  }
}
for(j=1;j<=m;j++)
{
  for(i=0;i<m-j;i++)
  {
     if(o[i]>o[i+1])
     {
       b=o[i+1];
       o[i+1]=o[i];
       o[i]=b;
     }
   }
}
for(i=0;i<=m-1;i++)
{
if(i!=m-1) printf("%d,",o[i]);
else if(i=m-1) printf("%d",o[m-1]);}
return 0;
}

