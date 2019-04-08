struct people
{
    char a[7];
    float l;
};
int main()
{
    int n,i,j;
    struct people* p;
    struct people pp;
    char* v="male";
    scanf("%d",&n);
    p=(struct people*)malloc(n*sizeof(struct people));
    for(i=0;i<n;i++)
        scanf("%s %f",p[i].a,&p[i].l);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        if(strcmp(p[i].a,p[j].a)<0)
        {
            pp=p[i];
            p[i]=p[j];
            p[j]=pp;
        }
        else
        {
        if(p[i].l>p[j].l&&strcmp(p[i].a,v)==0&&strcmp(p[j].a,v)==0)
        {
            pp=p[i];
            p[i]=p[j];
            p[j]=pp;
        }
        if(p[i].l<p[j].l&&strcmp(p[i].a,v)!=0&&strcmp(p[j].a,v)!=0)
        {
            pp=p[i];
            p[i]=p[j];
            p[j]=pp;
        }
        }
    }
    for(i=0;i<n-1;i++)
    printf("%.2f ",p[i].l);
    printf("%.2f",p[n-1].l);
    free(p);
    return 0;
}
