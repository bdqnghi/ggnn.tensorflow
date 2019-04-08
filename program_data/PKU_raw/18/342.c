int sum; 
void guiling(int a[100][100],int p)
{
  int t,s;
  int min1,min2; 
  for(s=0;s<p;s++) 
  {
    min1=a[s][0];
    for(t=1;t<p;t++)
    if(a[s][t]< min1)min1=a[s][t];
    for(t=0;t<p;t++)
    a[s][t]=a[s][t]-min1; 
  }
  for(t=0;t<p;t++) 
  {
    min2=a[0][t];
    for(s=1;s<p;s++)
    if(a[s][t]< min2)min2=a[s][t];
    for(s=0;s<p;s++)
    a[s][t]=a[s][t]-min2; 
  }
  sum=sum+a[1][1]; 
}
void xiaojian(int a[100][100],int p)
{
  int i,j;
  for(i=0;i<p;i++) 
  for(j=1;j<p-1;j++)
  a[i][j]=a[i][j+1];
  for(j=0;j<p-1;j++) 
  for(i=1;i<p-1;i++)
  a[i][j]=a[i+1][j]; 
}   
int main()                                  
{
  int n;
  int a[100][100];
  int i,j,k,t;
  scanf("%d",&n);
  for(i=1 ; i<=n ; i++) 
  {
    sum=0;
    for(j=0;j<n;j++) 
    for(k=0;k<n;k++)
    scanf("%d",&a[j][k]);
    for(t=n ; t>=2 ; t--)
    {
      guiling(a,t);
      xiaojian(a,t);
    }
    printf("%d\n",sum);
  }
  return 0;
}
