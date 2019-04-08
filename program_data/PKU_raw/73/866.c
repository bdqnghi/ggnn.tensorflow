int main()
{
    int a[5][5]={0},i,j,max[5]={0},min[5]={0};
    int count=0;
    for(i=0;i<5;i++)
    for(j=0;j<5;j++)
    scanf("%d",&a[i][j]); 
    for(i=0;i<5;i++)
    {    min[i]=a[0][i];
         max[i]=a[i][0];
         for(j=0;j<5;j++)
             {
                     if(a[i][j]>max[i])max[i]=a[i][j];
                     if(a[j][i]<min[i])min[i]=a[j][i];
             }
    }
    for(i=0;i<5;i++)
    for(j=0;j<5;j++) 
    {
        if(max[i]==min[j])
        {printf("%d %d %d",i+1,j+1,max[i]);count++;} //??????????????0?? 
    }      
    if(count==0)
    printf("not found");


return 0;
} 