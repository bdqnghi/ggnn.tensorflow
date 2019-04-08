int main()
{
    int a,b,max2;
    max2=0;
    char sep;
    scanf("%d%c",&a,&sep);
    while (sep==',')
    {
        scanf("%d%c",&b,&sep);
        if(b>a)
        {
            max2=a;
            a=b;
        }
        else
        {
            if(b>max2&&b!=a)
            {
                max2=b;
            }
        }
    }
    if(max2!=0)
    {
        printf("%d",max2);
    }
    else
    {
        printf("No");
    }
    return 0;
}