int main()
{
 int a[1000][1000],j,i,m,n,l,b,k;
scanf("%d",&l);
for(j=0;j<l;j++)
{
 for(i=0;i<l;i++)
{
  scanf("%d",&a[j][i]);
}
}
for(j=0;j<l;j++)
{
 for(i=0;i<l;i++)
{
if(a[j][i]==0){b=j;j=l;
break;}
}
}
for(m=l-1;m>=0;m--)
{
for(n=l-1;n>=0;n--)
{
if(a[m][n]==0){ k=m;m=-1;
break;}
}}
printf("%d",(k-b-1)*(n-i-1
));


return 0;
}
