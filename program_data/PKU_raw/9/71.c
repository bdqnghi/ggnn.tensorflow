int main()
{
    int n,year[100],i,j,year2[100]={0},t,k;
    char num[100][10],num2[100][10],p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",num[i]);
        scanf("%d",&year[i]);
    }
    for(i=0;i<n;i++)
    {
        if(year[i]>=60)
        {
            for(k=0;k<10;k++)
            {num2[i][k]=num[i][k];}
          year2[i]=year[i];
        }
    }
    for(j=0;j<n-1;j++)
       for(i=0;i<n-j-1;i++)
       {
           if(year2[i]<year2[i+1])
           {
               t=year2[i];
               year2[i]=year2[i+1];
               year2[i+1]=t;
            for(k=0;k<10;k++)
             {  p=num2[i][k];
               num2[i][k]=num2[i+1][k];
               num2[i+1][k]=p;
             }
           }
       }
    for(i=0;i<n;i++)
    {
        if(year2[i]!=0)
        printf("%s\n",num2[i]);
    }
    for(i=0;i<n;i++)
    {
        if(year[i]<60)
        printf("%s\n",num[i]);
    }
    return 0;
}
