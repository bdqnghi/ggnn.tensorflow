int main()
{
  int a[300],n,i,j,t,k;
  scanf("%d",&a[0]);
  for(i=1;;i++)
  {
    if(getchar()==',')
    scanf("%d",&a[i]);
    else
    break;
  }
 for(j=0,t=0;j<i;j++)
{
  if(a[j]>t)
  t=a[j];
}
for(j=0,k=0;j<i;j++)
{ 
   if(a[j]==t)
   continue;
   else if(a[j]>k)
   k=a[j];
 }
if(k==0)
printf("No");
else
printf("%d",k);
return 0;
}
  
  