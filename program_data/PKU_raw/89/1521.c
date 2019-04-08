void main()
{
int n,a[100000],b[100000],l,i=0,j,k;
scanf("%d\n",&n);
scanf("%d %d\n",&a[0],&b[0]);
while(!(a[i]==0&&b[i]==0))   {i++;scanf("%d%d",&a[i],&b[i]);}
for(j=0;j<n;j++)
{ l=0;
  for(k=0;k<i;k++)
 {
  if(a[k]==j)    break;
  else if(b[k]==j)   l++;}
  if(l==n-1)   break;}
if(j==n)  printf("NOT FOUND");
else printf("%d",j);
}
