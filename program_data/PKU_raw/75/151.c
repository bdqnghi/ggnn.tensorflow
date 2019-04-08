int main()
{
    char a[10000],b[10000];
    memset(a,0,sizeof a);
    memset(b,0,sizeof b);
    cin.getline(a,10000);
    cin.getline(b,10000);
    double aa[10000],bb[10000];
    memset(aa,0,sizeof aa);
    memset(bb,0,sizeof bb);
    int sum1=1,sum2=1,i,j;
    double min=0,max=0;
    aa[1]=atof(a);
    bb[1]=atof(b);
    for(i=1;;i++)
    {
        if(a[i]!=','&&a[i]!=0&&a[i-1]==',')
        {
            sum1++;
            aa[sum1]=atof(&a[i]);
            if(aa[sum1]>max) max=aa[sum1];
            if(aa[sum1]<min) min=aa[sum1];
        }
        if(a[i]==0) break;
    }

    for(i=1;;i++)
    {
        if(b[i]!=','&&b[i]!=0&&b[i-1]==',')
        {
            sum2++;
            bb[sum2]=atof(&b[i]);
            if(bb[sum2]>max) max=bb[sum2];
            if(bb[sum2]<min) min=bb[sum2];
        }
        if(b[i]==0) break;
    }

    cout<<sum1<<" ";
    int people[10000];
    memset(people,0,sizeof people);
    min=(int) min;
    max=(int) max;

    for(i=min;i<=max;i++)
    {
        for(j=1;j<=sum1;j++)
        {
            if(i>=aa[j]&&i<bb[j]) people[i]++;

        }
    }
    int Max=0;
    for(i=min;i<=max;i++)
    {
        if(people[i]>Max) Max=people[i];


    }
    cout<<Max;






    return 0;
}
