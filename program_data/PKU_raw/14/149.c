int main()
{
    int n;
    scanf ("%d",&n);
    struct student
    {
        int num;
        int chinese;
        int maths;
    };
    struct student a[100000],temp;
    int i,b[100000]={0};
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i].num);
        scanf("%d",&a[i].chinese);
        scanf("%d",&a[i].maths);
    }
    
    for (i=1;i<n;i++)
    {
        if ((a[i].chinese+a[i].maths)>(a[0].chinese+a[0].maths))
        {
            temp=a[0];
            a[0]=a[i];
            a[i]=temp;
        }
    }
    printf("%d %d\n",a[0].num,a[0].chinese+a[0].maths);
    
    for (i=2;i<n;i++)
    {
        if ((a[i].chinese+a[i].maths)>(a[1].chinese+a[1].maths))
        {
            temp=a[1];
            a[1]=a[i];
            a[i]=temp;
        }
    }
    printf("%d %d\n",a[1].num,a[1].chinese+a[1].maths);

    for (i=3;i<n;i++)
    {
        if ((a[i].chinese+a[i].maths)>(a[2].chinese+a[2].maths))
        {
            temp=a[2];
            a[2]=a[i];
            a[i]=temp;
        }
    }
    printf("%d %d\n",a[2].num,a[2].chinese+a[2].maths);
    return 0;
} 