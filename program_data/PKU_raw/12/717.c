int main(void)
{
    int a[MAX], n[100];

    int i, t, j, k, tr, sum[20], l=0;


    while (scanf("%d", &t), t!=-1)
    {   sum[l]=0;
        i=0;
        a[0]=t;
        while(i++,scanf("%d", &a[i]), a[i]);
        for(j=0; j<=i-1; j++)
        {
            for(k=0; k<=i-j-1; k++)
            {
                if(a[k]>a[k+1])
                {
                    tr = a[k];
                    a[k]= a[k+1];
                    a[k+1]= tr;
                }
            }
        }for(j=0; j<=i-1; j++)
        {
            for(k=j+1; k<=i; k++)
            {
                if ((2*a[j])==a[k])
                sum[l]++;
            }}l++;
    }
     for(i=0;i<l;i++)
            printf("%d\n", sum[i]);
    return 0;
}
