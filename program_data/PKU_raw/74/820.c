
const int num[9]={1,10,100,1000,10000,100000,1000000,10000000,100000000};
int main()
{
    int a,b;
    int l1,l2,flag,t;
    int res[1000];

    scanf("%d%d",&a,&b);
    res[0]=0;
    for (l1=a;l1<=b;l1++)
        {
            flag=l1-1;
            for (l2=2;l2<=(int)sqrt(l1);l2++)
                if (l1 % l2==0)
                    {
                        flag=0;
                        break;
                    }
            if (flag==0)
                continue;
            t=(int)log10(l1)+1;
            for (l2=1;l2<=t/2;l2++)
                if (l1%num[l2]/num[l2-1]!=
                    l1%num[t-l2+1]/num[t-l2+1-1])
                    {
                        flag=0;
                        break;
                    }
            if (flag==0)
                continue;
            res[0]++;
            res[res[0]]=l1;
        }

    for (l1=1;l1<=res[0]-1;l1++)
        printf("%d,",res[l1]);
    if (res[0]==0)
        printf("no\n");
    else
        printf("%d\n",res[res[0]]);

    return 0;
}
