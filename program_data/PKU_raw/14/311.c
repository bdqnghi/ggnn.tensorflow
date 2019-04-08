int cmp(const void *a,const void *b)
    {
         return(*(int*)a-*(int*)b);
    }
int main()
{
    struct student
    {
           int num;
           int chinese;
           int maths;
           int amount;
    };
    struct student stu[100000];
    int a[100000],n,l,j,k;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%d %d %d",&stu[i].num,&stu[i].chinese,&stu[i].maths);
        a[i]=stu[i].chinese+stu[i].maths;
    }
    qsort(a,n,sizeof(a[0]),cmp);
    for(int h=n-1;h>=0;h--)
    {
            if (a[n-1]==stu[h].chinese+stu[h].maths)
            {l=stu[h].num;}
    }
     for(int g=n-1;g>=0;g--)
    {
            if (a[n-2]==stu[g].chinese+stu[g].maths&&(g+1)!=l)
            {j=stu[g].num;}
    }
     for(int f=n-1;f>=0;f--)
    {
            if (a[n-3]==stu[f].chinese+stu[f].maths&&(f+1)!=j&&(f+1)!=l)
            {k=stu[f].num;}
    }
    printf("%d %d\n",l,a[n-1]);
    printf("%d %d\n",j,a[n-2]);
    printf("%d %d\n",k,a[n-3]);
}