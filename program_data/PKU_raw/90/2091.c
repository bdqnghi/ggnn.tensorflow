int main()
{
    int t,*m,*n,zhonglei(int x,int y),i;
    scanf("%d",&t);
    m=(int*)malloc(t*sizeof(int));
    n=(int*)malloc(t*sizeof(int));
    for(i=0;i<t;i++)
    {
                    scanf("%d%d",&m[i],&n[i]);
    }
    for(i=0;i<t;i++)
    {
                    printf("%d\n",zhonglei(m[i],n[i]));
    }
    return 0;
}

zhonglei(int x,int y)
{
             if(x==1) return(1);
             else if(y==1) return(1);
             else
             {
                 if(x<y) return(zhonglei(x,y-1));
                 else
                 {
                     return(zhonglei(x-y,y)+zhonglei(x,y-1));
                 }
             }
}
    