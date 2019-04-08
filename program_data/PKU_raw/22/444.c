
char t;
int begin = 0,a[1000],p = 1,i,done = 0;
char s[10000];

int IsDigit(char t)
{
    if(t <= '9' && t >= '0')
        return 1;
    return 0;
}

void sort(int l,int r)
{
    int i = l,j = r,k = a[(i + j) >> 1],t;
    do
    {
        while(a[i] > k)++i;
        while(a[j] < k)--j;
        if(i <= j)
        {
            t = a[i];
            a[i] = a[j];
            a[j] = t;    
            ++i;
            --j;
        }    
    }while(i <= j);
    if(i < r)sort(i,r);
    if(l < j)sort(l,j);
}

int main()
{
    memset(a,0,sizeof(a));
    scanf("%s",s);
    for(i = 0;i < strlen(s);++i)
    {
        t = s[i];
        if(!IsDigit(t))
        {
            if(begin == 1)
            {
                ++p;    
                begin = 0;
            }
        }
        else
        {
            begin = 1;
            a[p] = a[p] * 10 + t - '0'; 
        }
    }
    sort(1,p);
    for(i = 2;i <= p;++i)
        if(a[i] != a[i - 1])
        {
            printf("%d\n",a[i]);
            done = 1;
            break;    
        }
    if(done == 0)
        printf("No\n");
    return 0;    
}
