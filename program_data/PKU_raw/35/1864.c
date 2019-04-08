int maxh(int x[][8],int h,int l)
{
    int i,k=0;
    for(i=1;i<l;i++)
    {
                    if(x[h][i]>x[h][k])k=i;
    }
    return x[h][k];
}
int minl(int x[][8],int h,int l)
{
    int i,k=0;
    for(i=1;i<h;i++)
    {
                    if(x[i][l]<x[k][l])k=i;
    }
    return x[k][l];
}
int main()
{
    int h,l;
    scanf("%d,%d",&h,&l);
    int x[8][8],i,j,a,b,tip=0;
    for(i=0;i<h;i++)
    {
                    for(j=0;j<l;j++)scanf("%d",&x[i][j]);
    }
    for(i=0;i<h;i++)
    {
                    for(j=0;j<l;j++)
                    {
                                    if(x[i][j]==minl(x,h,j)&&x[i][j]==maxh(x,i,l)){a=i;b=j;tip=1;}
                    }
    }
    if(tip==0)printf("No");
    else printf("%d+%d",a,b);
}
