int max(int a,int b)
{
    return a>b?a:b;
}
int min (int a,int b)
{
    return a<b?a:b;
}
main()
{  int i,j,t,col,row,a[100][100];
   scanf("%d%d",&row,&col);
   for(i=0;i<row;i++)
     for(j=0;j<col;j++)
     scanf("%d",&a[i][j]);
    for(t=0;t<=col-1;t++)
    {
       j=t;
       for(i=0;i<=min(t,row-1);i++)
       { 
         printf("%d\n",a[i][j]);
         j--;
       }
    }
    for(t=1;t<=row-1;t++)
    {
       i=t;
       for(j=col-1;j>=max(col-row+t,0);j--)
        { 
         printf("%d\n",a[i][j]);
         i++;
       }
    }

 }
