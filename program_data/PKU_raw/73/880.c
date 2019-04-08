int main()
{
    int a[5][5],b[5][5];
    int i,j,max,min,flag;
    flag=0;
    for(i=0;i<5;i++)//row
    {
                    for(j=0;j<5;j++)//line
                    {
                                    scanf("%d",&a[i][j]);
                                    b[i][j]=0;
                    }
    }
    for(i=0;i<5;i++)
    {
                    max=a[i][0];
                    for(j=0;j<5;j++)if(max<a[i][j])max=a[i][j];
                    for(j=0;j<5;j++)if(a[i][j]==max)b[i][j]=1;
    }
    for(j=0;j<5;j++)
    {
                    min=a[0][j];
                    for(i=0;i<5;i++)if(min>a[i][j])min=a[i][j];
                    for(i=0;i<5;i++)if(a[i][j]==min)b[i][j]=b[i][j]+1;
    }
    for(i=0;i<5;i++)//row
    {
                    for(j=0;j<5;j++)//line
                    {
                                          //printf("%d ",b[i][j]);
                                          if(b[i][j]==2)
                                          {
                                                        printf("%d %d %d",i+1,j+1,a[i][j]);flag=1;
                                          }
                    }
                    printf("\n");
    }
    if(!flag)printf("not found");
    return 0;
}