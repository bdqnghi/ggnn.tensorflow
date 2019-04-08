void main()
{
    int i,j,k,min,**p,row,col;
    scanf("%d%d",&row,&col);
    p=(int **)malloc(row*sizeof(int *));
    for(i=0;i<row;i++)
    *(p+i)=(int *)malloc(col*sizeof(int));
    for(i=0;i<row;i++)
    for(j=0;j<col;j++)
    scanf("%d",*(p+i)+j);
    min=row<col?row:col;
    for(k=0;k<min;k++)
    for(i=0,j=k;i<=k;i++,j--)
    printf("%d\n",*(*(p+i)+j));
    if(col==min)
    for(k=1;k<row;k++)
    for(i=k,j=col-1;i<row&&j>=0;i++,j--)
    printf("%d\n",*(*(p+i)+j));
    else
    {
        for(k=min;k<col;k++)
        for(i=0,j=k;i<row;i++,j--)
        printf("%d\n",*(*(p+i)+j));
        for(k=1;k<row;k++)
        for(i=k,j=col-1;i<row;i++,j--)
        printf("%d\n",*(*(p+i)+j));
    }
}