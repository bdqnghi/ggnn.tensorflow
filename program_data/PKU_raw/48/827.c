int main()
{
   int a[12][12]={0},b[12][12]={0};
   int i,j,k,f,t,m,n;
   scanf("%d %d",&m,&n);
   a[5][5]=m;
   for(k=0;k<n;k++)
   {
     for(i=1;i<=9;i++)
       {
         for(j=1;j<=9;j++)
         b[i][j]=2*a[i][j]+a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+a[i][j-1]+a[i][j+1]+a[i+1][j-1]+a[i+1][j]+a[i+1][j+1];
       }
       for(t=1;t<=9;t++)
       for(f=1;f<=9;f++)
       a[t][f]=b[t][f];
   }
   for(i=1;i<=9;i++)
   for(j=1;j<=9;j++)
   {
     if(j<=8)
     printf("%d ",a[i][j]);
     else
     printf("%d\n",a[i][j]);
   }
   
} 
