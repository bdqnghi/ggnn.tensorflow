
int act(int n,int m)
{
    if (m==1||m==0) {
        return 1;
    }
    else
    if (n==1&&m>0) {
        return 1;
    }
    else
    if (m<0) {
        return 0;
    }
    else
        return (act(n, m-n)+act(n-1, m));
}

int main()
{
    int times,i,m,n;
    scanf("%d",&times);
    
    for (i=0; i<times; i++) {
        scanf("%d %d",&m,&n);
        printf("%d\n",act(n, m));
    }
    return 0;
}