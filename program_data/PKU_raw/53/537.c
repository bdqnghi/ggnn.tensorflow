int main()
{int a[100][2],n,i,j,kai;
scanf("%d",&n);
for(i=0;i<=n-1;i++)
{scanf("%d",&a[i][0]);a[i][1]=0;}

for(i=0;i<=n-1;i++)
{
                   for(j=i+1;j<=n-1;j++)
                   if(a[i][0]==a[j][0])
                   a[j][1]=1;
}
for(i=0,kai=0;i<=n-1;i++)
{
                         if(a[i][1]==0&&kai==0)
                         {printf("%d",a[i][0]);kai=1;continue;}
                         if(a[i][1]==0&&kai==1)
                         printf(",%d",a[i][0]);
}

                       
   return 0;
}


