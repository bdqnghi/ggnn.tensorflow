int main()
{
    int array[100][100],col,row,cs=0,i,j,x=0;
    scanf("%d%d",&row,&col);
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            scanf("%d",&array[i][j]);
    }
    
    do{
        for(i=cs;i<cs+col-1;i++)
            printf("%d\n",array[cs][i]);
        
        for(i=cs;i<cs+row-1;i++)
            printf("%d\n",array[i][cs+col-1]);
        
        if(i!=cs){
        for(i=cs;i<cs+col-1;i++)
            printf("%d\n",array[cs+row-1][2*cs+col-i-1]);
        }else
        {
            printf("%d\n",array[cs+row-1][cs+col-1]);
            x=1;
        }
        
        if(i!=cs){
        for(i=cs;i<cs+row-1;i++)
            printf("%d\n",array[2*cs+row-i-1][cs]);
        }else if(x==0)
            printf("%d\n",array[cs+row-1][cs]);
        
        cs++;
        col-=2;
        row-=2;
    
    } while(col>0&&row>0);
    
    return 0;
}


