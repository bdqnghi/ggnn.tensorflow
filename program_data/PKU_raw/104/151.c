int zheng(int x,int i)
{
    int j;
    if(i!=1) 
    {
        for(j=1;j<i;j++)
            x=x/2;
    }
    return(x);
}
void main()
{
    int zheng(int x,int i);
    int x,y,i,j,temp=0;
    scanf("%d%d",&x,&y);
    if(x==y)
        printf("%d",x);
    else
    {
        for(i=1;i<=10;i++)
        {
            if(temp!=0)
               break;
            for(j=1;j<=10;j++)
            {
                if(zheng(x,i)==zheng(y,j))
                {
                    temp=zheng(y,j);
                    break;
                 }
             }
         }
         printf("%d",temp);
     }   
}