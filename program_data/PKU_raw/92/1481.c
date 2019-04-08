int Compare(const void*elem1,const void*elem2)
{
    int*p1,*p2;
    p1=(int*)elem1;
    p2=(int*)elem2;
    return(*p2)-(*p1);
}
main()
{
    int i;
    for(i=0;;i++)
    {
        int n;
        scanf("%d",&n);
        if(n==0)
        break;
        else
        {
        int a[n],b[n];
        int j;
        for(j=0;j<n;j++)
        scanf("%d",&a[j]);
        int k;
        for(k=0;k<n;k++)
        scanf("%d",&b[k]);
        qsort(a,n,sizeof(int),Compare);
        qsort(b,n,sizeof(int),Compare);
         j=0;
         k=0;
        int p=0;
        int q=0;
        int t=0;
        int tailt=n-1;
        int tailq=n-1;
        for(;(p+q+t)!=n;)
        {
            if(a[j]>b[k])
            {
                t++;
                j++;
                k++;
            }
            else if(a[j]<b[k])
            {
                tailt--;
                k++;
                q++;
            }
            else if(a[j]==b[k])
            {
                if(a[tailt]>b[tailq])
                {
                    t++;
                    tailt--;
                    tailq--;
                }
                else if(a[tailt]==b[tailq])
                {
                    if(a[tailt]==b[k])
                    {
                        p++;
                        tailt--;
                        k++;
                    }
                    else
                    {
                        q++;
                        tailt--;
                        k++;
                    }
                }
                else if(a[tailt]<b[tailq])
                {
                    q++;
                    tailt--;
                    k++;
                }
            }
        }
        int profit;
        if(t==q)
        printf("0\n");
        else if(t>q)
        {
            profit=200*(t-q);
            printf("%d\n",profit);
        }
        else if(t<q)
        {
            profit=200*(q-t);
            printf("-%d\n",profit);
        }
        }
    }
}
