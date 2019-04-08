
int main()
{
    int n,hang,hang2,hang3,lie,lie2,lie3,squ;
    squ=0;
    scanf("%d",&n);
    int a[n][n];
    for(hang=0;hang<n;hang++)
    {
        for(lie=0;lie<n;lie++)
        {
            scanf("%d",&a[hang][lie]);
        }
    }
    for(hang=1;hang<n-1;hang++)
    {
        for(lie=1;lie<n-1;lie++)
        {
            for(hang2=hang;a[hang][lie]==255&&hang2>=0;hang2--)
            {
                if(a[hang2][lie]==0)
                {
                    for(hang3=hang;hang3<n;hang3++)
                    {
                        if(a[hang3][lie]==0)
                        {
                            for(lie2=lie;lie2>=0;lie2--)
                            {
                                if(a[hang][lie2]==0)
                                {
                                    for(lie3=lie;lie3<=n;lie3++)
                                    {
                                        if(a[hang][lie3]==0)
                                        {
                                            squ+=1;
                                            break;
                                        }
                                    }
                                    break;
                                }
                            }
                            break;
                        }
                    }
                    break;
                }
            }
        }
    }
    printf("%d",squ);
    return 0;
}

