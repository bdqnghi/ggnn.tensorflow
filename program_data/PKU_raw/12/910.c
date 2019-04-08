void main()
{
int i,j,l,m=0,c[100][100],f[100]={0};
for(j=1;;j++)
{
  scanf("%d",&c[j][1]);
  if(c[j][1]==-1) break;
  for(i=2;;i++)
   {
    scanf("%d",&c[j][i]);
   if(c[j][i]==0) break;
   for(l=i;l>=1;l--)
   if(c[j][l]==2*c[j][i]||c[j][i]==2*c[j][l]) f[j]++;
   }
 m++;
}
for(j=1;j<=m;j++)
printf("%d\n",f[j]);
}