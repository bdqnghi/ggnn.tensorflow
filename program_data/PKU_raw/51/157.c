struct a
{
    char s[10];
    int num,del;
}list[500];
int n,len;
char s[1000];
int tot;
int max=-1;

void init()
{
    int i,j,k;
    scanf("%d\n",&n);
    len=strlen(gets(s));
    tot=len-n+1;
    for(i=0;i<tot;i++)
    {
        for(j=0;j<n;j++)
        {
            list[i].s[j]=s[i+j];
        }
        list[i].num=list[i].del=0;
        list[i].s[n]='\0';
    }
}

void solve()
{
    int i,j;
    for(i=0;i<tot;i++)
    {
        if(!list[i].del)
        {
            list[i].num=1;
            for(j=i+1;j<tot;j++)
            {
                if(!strcmp(list[i].s,list[j].s))
                {
                    list[i].num++;
                    list[j].del=1;
                }
            }
            if(list[i].num>max)
            {
                max=list[i].num;
            }
        }
    }
}

void print()
{
    int i;
    if(max-1)
    {
        printf("%d\n",max);
        for(i=0;i<tot;i++)
        {
            if(!list[i].del && list[i].num==max)
            {
                puts(list[i].s);
            }
        }
    }
    else    puts("NO");
}

int main()
{
    init();
    solve();
    print();
    return 0;
}
