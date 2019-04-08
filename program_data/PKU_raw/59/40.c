char infect(char *a,int x,int y,int n)
{
    if(x-1>=0)
        if(*(a+100*(x-1)+y)=='.')
            *(a+100*(x-1)+y)='p';
    if(x+1<n)
        if(*(a+100*(x+1)+y)=='.')
            *(a+100*(x+1)+y)='p';
    if(y-1>=0)
        if(*(a+100*x+y-1)=='.')
            *(a+100*x+y-1)='p';
    if(y+1<n)
        if(*(a+100*x+y+1)=='.')
            *(a+100*x+y+1)='p';
}
char one_day(char *a,int n)
{
    int i,j;
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            if(*(a+100*i+j)=='@')
                infect(a,i,j,n);
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            if(*(a+100*i+j)=='p')
                *(a+100*i+j)='@';

}

int count(char *a,int n)
{
    int i,j;
    int res=0;
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            if(*(a+100*i+j)=='@')res++;
    return res;

}
int main()
{
    char a[100][100];
    int i,j;
    int n;
    scanf("%d",&n);
    for(i=0; i<n; i++)scanf("%s",a[i]);
    int day;
    scanf("%d",&day);
    while(--day)
    one_day(a,n);
    printf("%d\n",count(a,n));

}
