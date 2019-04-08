int main()
{
    struct student
    {
        char name[20];
        int a;
        int b;
        char c;
        char d;
        int e;
        int sum;
    };
    struct student st[100];
    int n,i,am=0,max;
    char f[20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s %d %d %c %c %d",st[i].name,&st[i].a,&st[i].b,&st[i].c,&st[i].d,&st[i].e);
        st[i].sum=0;
    }
    for(i=0;i<n;i++)
    {
        if(st[i].a>80 && st[i].e>0)
        st[i].sum=st[i].sum+8000;
        if(st[i].a>85 && st[i].b>80)
        st[i].sum=st[i].sum+4000;
        if(st[i].a>90)
        st[i].sum=st[i].sum+2000;
        if(st[i].a>85 && st[i].d=='Y')
        st[i].sum=st[i].sum+1000;
        if(st[i].b>80 && st[i].c=='Y')
        st[i].sum=st[i].sum+850;
        am=am+st[i].sum;
    }
    max=st[0].sum;
    for(i=0;i<n;i++)
    {
       if(max<st[i].sum)
       {
           max=st[i].sum;
           strcpy(f,st[i].name);
       }
    }
    printf("%s\n%d\n%d",f,max,am);
    return 0;
}