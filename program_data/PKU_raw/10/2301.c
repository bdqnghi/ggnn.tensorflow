struct z
{
       int g;
       int h;
};
int main()
{
    int k,i,j,w;
    struct z a[50];
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {scanf("%d",&a[i].g);}
    for(i=0;i<k;i++)
    {a[i].h=1;}
    for(i=k-2;i>=0;i--)
    {
        for(j=i+1;j<k;j++)
        {
             if(a[i].g>=a[j].g)
             {
                 if(a[i].h<a[j].h+1)
                  a[i].h=a[j].h+1;
             }
        }
    }
    for(i=0;i<k-1;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(a[i].h<a[j].h)
            {
               w=a[i].h;
               a[i].h=a[j].h;
               a[j].h=w;
            }
        }
    }
    printf("%d\n",a[0].h);
    //getchar();
    //getchar();
    return 0;
}
