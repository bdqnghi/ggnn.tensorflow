int main()
{
    int x1,y1,x2,y2;
    int A[100][100];
    int B[100][100];
    int c[100][100];
    int i,x;
    int k=0;
    scanf("%d %d",&x1,&y1);
    for(i=0;i<=x1-1;i++)
    {
        for(k=0;k<=y1-1;k++)
            scanf("%d",&(A[i][k]));
    }
    scanf("%d %d",&x2,&y2);
    for(i=0;i<=x2-1;i++)
    {
        for(k=0;k<=y2-1;k++)
          scanf("%d",&B[i][k]);
    }
    int result=0;
    for(i=0;i<=x1-1;i++)
    {
        if(i!=0)
        printf("\n");
        for(k=0;k<=y2-1;k++)
       {
           for(x=0;x<=y1-1;x++)
           result=result+A[i][x]*B[x][k];
           if(k==0)
           printf("%d",result);
           if(k!=0)
           printf(" %d",result);
           result=0;
       }
    }
}