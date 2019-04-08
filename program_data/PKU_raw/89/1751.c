int main ()
{
    int *p;
    int n,i,t,x,y;
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        p[i]=0;
    scanf("%d %d",&x,&y);
    while(x!=0||y!=0)
    {
        if (x!=y)
        {p[x]--;
        p[y]++;}
        scanf("%d %d",&x,&y);
    }
    t=1;
    for(i=0;i<n;i++) if(p[i]==n-1)
    {
        printf("%d",i);
        t=0;
        break;
    }
    if (t) printf("NOT FOUND");
    free(p);
}
