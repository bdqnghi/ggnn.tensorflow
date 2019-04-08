 
int judge(int a[][5],int n,int m)
{
    int i,temp;
    if(n<=4&&n>=0&&m>=0&&m<=4)
    {
        for(i=0;i<5;i++)
        {
            temp=a[n][i];
            a[n][i]=a[m][i];
            a[m][i]=temp;
         }
    return(1);
    }
    else
        return(0);
}
void main()
{
    int judge(int a[][5],int n,int m);
    int i,j,a[5][5],n,m;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
            scanf("%d",&a[i][j]);
     }
     scanf("%d%d",&n,&m);
     if(judge(a,n,m)==0)
         printf("error\n");
     else 
     {
         int judge(a,n,m);
         for(i=0;i<5;i++)
         { 
            for(j=0;j<4;j++)
                printf("%d ",a[i][j]);
            printf("%d\n",a[i][4]);
         }
      }
}