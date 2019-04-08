int main()
{
    int row,col;
    int array[110][110];
    scanf("%d%d",&row,&col);
    int i,j;
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
            scanf("%d",*(array+i)+j);   //????
    for(i=0;i<col;i++)             //???
    {
        for(j=0;((j<=i)&&(j<row));j++)            //????
        {
            printf("%d\n",*(*(array+j)+i-j));    //????
        }
    }
    for(i=1;i<row;i++)            //?
    {
        for(j=0;((j<=col-1)&&(j<row-i));j++)   //????
        {
            printf("%d\n",*(*(array+i+j)+col-1-j));  //????
        }
    }
    return 0;
}