
char id[101][11];

int main()
{   int n;
    int age[101],a[101];
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        scanf("%s%d",id[i],&age[i]);
        int j=i;
        if (age[i]>=60)
        {
           for (;j>1&&age[a[j-1]]<age[i];j--)
           a[j]=a[j-1];
        }
        a[j]=i;
    }
    for (int i=1;i<=n;i++)
    printf("%s\n",id[a[i]]);
    getchar();
    getchar();
    return 0;
    
}
