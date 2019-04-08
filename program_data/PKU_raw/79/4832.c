//??????????...?????????--by ??? 2011.11.10
struct stu
{
    int num;
    struct stu * next;
};
int tiren(int x,int n,int m,struct stu * p)//???? x?????
{
    int i;
    struct stu * pp;
    if (x!=n)
    {
        for (i=1;i<=m-1;i++)
        p=(*p).next;
        pp=(*p).next;
        (*p).next=(*pp).next;
        tiren(x+1,n,m,p);
    }
    else
    printf("%d\n",(*p).num);
    return 0;
}


main()
{
    int n,m,i;
    struct stu * head,* p;
    scanf("%d %d",&n,&m);
    while ((n!=0))
    {
    head=p=(struct stu *)malloc(L);
    for (i=2;i<=n;i++)
    {
        (*p).num=i-1;
        p=(*p).next=(struct stu *)malloc(L);

    }
    (*p).next=head;
    (*p).num=n;
    tiren(1,n,m,p);
    scanf("%d %d",&n,&m);
    }

}
