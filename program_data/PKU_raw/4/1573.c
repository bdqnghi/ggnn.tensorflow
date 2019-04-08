
int main()
{
    int i,row,col,rst=0,cst=0;
    int R,C;
    int a[100][100];
    scanf("%d%d",&R,&C);
    for(row=0;row<R;row++)
    {
       for(col=0;col<C;col++)
       {
          scanf("%d",&a[row][col]);
       }
    }
    
    for(i=0;i<R+C-1;i++)
    {
       row=rst;
       col=cst;
       while(row!=R&&col!=-1)
       {
           printf("%d\n",a[row][col]);
           row++;
           col--;
       }
       if(cst!=C-1) cst++;
       else rst++;
    }
    
  return 0;
}
