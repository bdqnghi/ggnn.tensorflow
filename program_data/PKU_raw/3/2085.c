int main()
{  
    int sz[2000];
    int n,k,s,b;
    b=0;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
    {
            scanf("%d",&sz[i]);
            if(i>=1&&i<n)
            for(int a=0;a<i;a++)
            {
                    s=sz[i]+sz[a];
                    if(s==k)
                    b++;
            }
    }
    if(b!=0)
    printf("yes");
    else if(b==0)
    printf("no");
return 0;
}
