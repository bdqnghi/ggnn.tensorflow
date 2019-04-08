int main()
{
int i,j,k,a[N][N],max,maxj,f;
for(i=0;i<N;i++)
   for(j=0;j<N;j++)
      scanf("%d",&a[i][j]);
for(i=0;i<N;i++)
{
  max=a[i][0];
  maxj=0;
  for(j=0;j<N;j++)
    if(a[i][j]>max)
      {
         max=a[i][j];
         maxj=j;
      }
  f=1;
  for(k=0;k<N;k++)
    if(max>a[k][maxj])
        {f=0;continue;}
  if(f){printf("%d %d %d",i+1,maxj+1,a[i][maxj]);break;}
  

}
if(!f) printf("not found");
return 0;

}