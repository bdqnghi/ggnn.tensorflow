
int main()
{
    int x,y,x0,y0,result,flag=0;
    
    scanf("%d %d",&x,&y);
    
    x0=x;y0=y;
    for (x=x0;x>=1;x/=2)
        for (y=y0;y>=1;y/=2)
            if (x==y&&flag==0)
            {
               result=x;
               flag=1;
            }
    
    printf("%d\n",result);
    getchar();getchar();
    
    return 0;
    
}
