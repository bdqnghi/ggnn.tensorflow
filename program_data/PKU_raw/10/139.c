void main()
{
    int a[50]={0},flag[50],max,i,j,count=1,st=0;
    int num;
    scanf("%d",&num);
    for (i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
        flag[i]=1;
    }
    for (i=0;i<num;i++)
    {
        for(j=0;j<i;j ++)
        {
            if(a[j]>=a[i])
            {
                flag[i]=flag[j]+1>flag[i]?flag[j]+1:flag[i];
            }
        }
    }
    max = flag[0];
    for (i=1;i<num;i++)
    {
        if (flag[i]>max)
        max=flag[i];
    }
    printf("%d\n",max);
}