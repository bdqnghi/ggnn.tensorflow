int t[10001];
int main()
{
   int i,n,m=0,t=0,x,y;
   scanf("%d",&n);
    for(i=0;i<n;i++)
{
    scanf("%d%d",&x,&y);
    if(x>=90&&x<=140&&y<=90&&y>=60){t++;m=m>t?m:t;}
    else t=0;
}
    printf("%d",m);
    return 0;
}
