int a(int n);
int main()
{
    int b[5][5];
    int i,j,k;
    int n1,n2;
    for(i=0;i<5;i++)
     for(j=0;j<5;j++)
     scanf("%d",&b[i][j]);
     scanf("%d%d",&n1,&n2);
     if((a(n1)==0)||(a(n2)==0))
     printf("error");
     else
     {
         for(i=0;i<5;i++)
         {
             if(i==n1)
                 {
                     for(j=0;j<4;j++)
                     printf("%d ",b[n2][j]);
                     printf("%d\n",b[n2][j]);
                 }
                 else if(i==n2)
                 {
                     for(j=0;j<4;j++)
                     printf("%d ",b[n1][j]);
                     printf("%d\n",b[n1][j]);
                 }
                 else
                 {
                     for(j=0;j<4;j++)
                     printf("%d ",b[i][j]);
                     printf("%d\n",b[i][j]);
                 }

         }}


}
int a(int n)
{
    if((n>=0)&&(n<5))
    return 1;
    else
    return 0;
}
