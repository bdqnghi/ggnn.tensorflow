int main()
{
    double yi=0,er=0,san=0,si=0;
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<=18)
        {
        yi++;
        }
        else if(a[i]<=35)
        {
        er++;
        }
        else if(a[i]<=60)
       {
        san++;
        }
        else if(a[i]>=60)
        {
        si++;
        }
    }
    printf("1-18: %.2lf%%\n",yi/n*100);
    printf("19-35: %.2lf%%\n",er/n*100);
    printf("36-60: %.2lf%%\n",san/n*100);
    printf("60??: %.2lf%%\n",si/n*100);
    return 0;
}