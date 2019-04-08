int main()
{
    int n, i, k;
    double p, j, s;
    s=0;
    k=0;
    scanf("%d", &n);
    int xf[100], df[100];
    for(i=0;i<=n-1;i++){
        scanf("%d", &xf[i]);}
    for(i=0;i<=n-1;i++){
        scanf("%d", &df[i]);}
    for(i=0;i<=n-1;i++){
        if(df[i]>=90&&df[i]<=100)
            j=4.0;
            else if(df[i]>=85&&df[i]<=89)
                j=3.7;
                else if(df[i]>=82&&df[i]<=84)
                    j=3.3;
                    else if(df[i]>=78&&df[i]<=81)
                        j=3.0;
                        else if(df[i]>=75&&df[i]<=77)
                            j=2.7;
                            else if(df[i]>=72&&df[i]<=74)
                                j=2.3;
                                else if(df[i]>=68&&df[i]<=71)
                                    j=2.0;
                                    else if(df[i]>=64&&df[i]<=71)
                                        j=1.5;
                                        else if(df[i]>=60&&df[i]<=63)
                                            j=1.0;
                                            else if(df[i]<60)
                                                j=0;
    s=s+j*xf[i];
    k=k+xf[i];
    }
    p=(double)s/k;
    printf("%.2lf", p);
    return 0;
}
