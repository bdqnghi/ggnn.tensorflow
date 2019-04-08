struct student
{
    int num;
    int yw;
    int sx;
};
int main()
{
    int n,i,x=0,y=0,z=0;
    scanf("%d",&n);
    struct student a[n];
    int b[n];
    for(i=0;i<n;i++)
        {
            scanf("%d%d%d",&a[i].num,&a[i].yw,&a[i].sx);
            b[i]=a[i].yw+a[i].sx;
        }
    for(i=1;i<n;i++)
        {
            if(b[x]<b[i])
                x=i;
        }
    printf("%d %d\n",a[x].num,b[x]);
    for(i=1;i<n;i++)
        {
            if(i==x) continue;
            if(b[y]<b[i])
                y=i;
        }
    printf("%d %d\n",a[y].num,b[y]);
    for(i=1;i<n;i++)
        {
            if(i==x) continue;
            if(i==y) continue;
            if(b[z]<b[i])
                z=i;
        }
    printf("%d %d\n",a[z].num,b[z]);
    getchar();
    getchar();
}