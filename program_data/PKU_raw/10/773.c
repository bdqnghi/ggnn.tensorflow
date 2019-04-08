int main()
{
int  n,i,j,s=0,a[25],b[25];
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&b[i]);
}
for(i=0;i<n;i++)
{
  a[i]=0;
 for(j=0;j<=i;j++)
{
   if(b[i]<=b[j]&&a[i]<=a[j])
   {
    a[i]=a[j];
    }
}
a[i]++;
 if(s<a[i])
 {
 s=a[i];
 }
}
printf("%d",s);
return 0;
}

