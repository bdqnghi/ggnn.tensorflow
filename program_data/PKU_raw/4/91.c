void main()
{
    int row,col,i,j;
    scanf ("%d%d",&row,&col);
    int **a;
    a=(int**)malloc(row*sizeof(int*));
    for (i=0;i<row;i++)
    a[i]=(int*)malloc(col*sizeof(int));
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        scanf ("%d",*(a+i)+j);
    }
    int len;
    for (len=0;len<row+col-1;len++)
	{
        for(i=0;i<row;i++)
		{
            j=len-i;
            if((j<col)&&(j>=0))
                printf("%d\n",*(*(a+i)+len-i));
        }
    }
    return 0; 
}  