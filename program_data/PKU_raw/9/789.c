int main()
{
    int n,i,j,k;
    scanf ("%d",&n);
    struct patient
    {
        char num[10];
        int age;
    };
    struct patient p[100],temp;
    for (i=0;i<n;i++)
    scanf ("%s %d",&p[i].num,&p[i].age);
    for (i=0;i<n-1;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (p[j].age>p[i].age&&p[j].age>=60)
            {
                for (k=j;k>i;k--)
                {
                    temp=p[k];
                    p[k]=p[k-1];
                    p[k-1]=temp;
                }
            }
        }
        printf("%s\n",p[i].num);
    }
    printf("%s\n",p[n-1].num);
    return 0;
}
