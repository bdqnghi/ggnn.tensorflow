
int main()
{int m,n,k,i,j,a[25],b[25],max;
scanf("%d",&k);
for(i=0;i<=k-1;i++)
scanf("%d",&a[i]);
for(i=k-1;i>=0;i--)
{
                   if(i==k-1)
                   b[i]=1;
                   else
                   {max=0;
                       for(j=i+1;j<=k-1;j++)
                   if(a[j]<=a[i]&&b[j]>=max)
                   max=b[j];
                   b[i]=max+1;
                   }
}
max=0;
for(i=0;i<=k-1;i++)
{if(b[i]>=max)
max=b[i];}
printf("%d",max);
             
             
  
   return 0;
}
