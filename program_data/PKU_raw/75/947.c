int main()
{
    int come[10000],go[10000],i=0,j=0;
    int num[1100]={0};
    char s;
    while(1)
    {
        s=getchar();
        if(s==',')
        {
            come[i]=j;
            i++;
            j=0;
        }
        else if(s=='\n')
        {
            come[i]=j;
            i++;
            j=0;
            break;
        }
        else
            j=j*10+s-'0';
    }
    i=0,j=0;
    while(1)
    {
        s=getchar();
        if(s==',')
        {
            go[i]=j;
            i++;
            j=0;
        }
        else if(s=='\n')
        {
            go[i]=j;
            i++;
            j=0;
            break;
        }
        else
            j=j*10+s-'0';
    }
    int n=i;
    printf("%d ",n);
    for(i=0;i<=1000;i++)
    {
        for(j=0;j<n;j++)
        if(i>=come[j]&&i<go[j])
        num[i]++;
    }
    int max=0;
    for(i=0;i<=1000;i++)
        if(num[i]>max)
            max=num[i];
    printf("%d\n",max);
    getchar();
    getchar();
}
