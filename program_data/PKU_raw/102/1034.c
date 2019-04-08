int main ()
{
    int n,i,j,s,f,m;
    double male[41],female[41];
    char tip[7];
    scanf("%d\n",&n);
    f=0;
    m=0;
    for(i=0;i<n-1;i++)
    {
                    scanf("%s",tip);
                    if(tip[0]=='f') {scanf("%lf\n",&female[f]);f++;}
                    else
                    {scanf("%lf\n",&male[m]);m++;}
                    }
    scanf("%s",tip);
    if(tip[0]=='f') {scanf("%lf",&female[f]);f++;}
    else
    {scanf("%lf",&male[m]);m++;}
    s=1;
    while (s>0)
    {s=0;
    for (i=0;i<m-1;i++)
    if (male[i]>male[i+1]) {male[i]=male[i]+male[i+1];male[i+1]=male[i]-male[i+1];male[i]=male[i]-male[i+1];s++;}
    }
    s=1;
    while (s>0)
    {s=0;
    for (i=0;i<f-1;i++)
    if (female[i]<female[i+1]) {female[i]=female[i]+female[i+1];female[i+1]=female[i]-female[i+1];female[i]=female[i]-female[i+1];s++;}
    }
    for(i=0;i<m;i++) printf("%.2lf ",male[i]);
    for(i=0;i<f-1;i++) printf("%.2lf ",female[i]);
    printf("%.2lf\n",female[f-1]);
    return 0;
}
