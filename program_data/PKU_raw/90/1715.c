int main()
{
    int app(int x,int y);
    int s, x, y, i;
    scanf("%d",&s);
    for(i=1;i<=s;i++)
    {
                     scanf("%d%d",&x,&y);
                     printf("%d\n",app(x,y));
    }
    return 0;
}
    
    
    
    
    
int app(int x,int y)
{
    if(x<y&&y!=1)
    {
         return app(x,y-1);
    }
    else if(y==1) 
    {
         return 1;
    }
    else
    {
         return (app(x,y-1)+app(x-y,y));
    }
}