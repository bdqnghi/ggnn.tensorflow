int main()
{int a[300]={0},i,j,b,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
scanf("%d",&a[i-1]);


for(i=1;i<=n;i++)
{if(a[i-1]==0)
continue;
                   for(j=i+1;j<=n;j++)
                   {
                                        if(a[j-1]==a[i-1])
                                        a[j-1]=0;
                   }
}

for(i=0,b=0;i<=n-1;i++)
{
                   if(a[i]!=0&&b==0)
                   {printf("%d",a[i]);
                   b=1;continue;}
                    if(a[i]!=0&&b!=0)
                    printf(",%d",a[i]);
                    }
                                        

             
                    

  
    return 0;
}
