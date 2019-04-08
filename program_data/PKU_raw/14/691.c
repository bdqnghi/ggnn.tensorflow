typedef struct st
{
      int a,b;
} stu ;
stu s[100000];
int comp(const void *a,const void *b)
{
    return ((stu*)b)->b-((stu*)a)->b;
}
int main()
{
    int i,n,a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    scanf("%d%d%d",&s[i].a,&a,&b);
                    s[i].b=a+b;
    }
    qsort(s,n,sizeof(stu),comp);
    printf("%d %d\n%d %d\n%d %d",s[0].a,s[0].b,s[1].a,s[1].b,s[2].a,s[2].b);
    //getch();
    return 0;
}
