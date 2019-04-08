int main()
{
int n,i,a[100],b[100],min=10000,max=0,flag;
float j;
scanf("%d",&n);
for(i=1;i<=n;i++)scanf("%d %d",&a[i],&b[i]);
for(i=1;i<=n;i++)if(a[i]<min)min=a[i];
for(i=1;i<=n;i++)if(b[i]>max)max=b[i];
for(j=min;j<=max;j=j+0.5)
{
   flag=0;
   for(i=1;i<=n;i++)
     {
     if(j>=a[i]&&j<=b[i])
     {flag=1;
     break;}
     }
     if(flag!=1)break;
}
if(flag==1){printf("%d %d",min,max);}
else{printf("no");}
}
