int main()
{
int a[100]={0};
int i,key=0,n,j,p;
scanf("%d",&n);
a[key]=1;
for(i=1;i<=n;i++)
{
   for(j=0;j<100;j++)
   {
    if(a[j]!=0) 
    a[j]=a[j]*2; 
  } 
   for(j=0;j<100;j++)
   { 
    if(a[j]>=10) 
    {a[j]=a[j]%10;a[j+1]=a[j+1]+1;}
   } 
}

for(i=99;i>=0;i--)
if(a[i]!=0){p=i;break;}
for(i=p;i>=0;i--)
printf("%d",a[i]);
printf("\n");
return 0;
}
