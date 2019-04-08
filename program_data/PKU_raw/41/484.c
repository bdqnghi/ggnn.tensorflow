
int flag=0;
char t[6], ok[6];
int f[6];

int yes()
{
    int i;
    for(i=0; i<2; i++)
    {
        switch(t[i])
        {
            case 'A': return 0;
            case 'B': if(i!=1) return 0; else break;
            case 'C': if(t[4]!='A') return 0; else break;
            case 'D': if(t[0]=='C') return 0; else break;
            case 'E': if(t[0]!='D') return 0; else break;
        }
    }
    for(i=2; i<5; i++)
    {
        switch(t[i])
        {
            case 'A': if(t[0]=='E') return 0; else break;
            case 'B': break;
            case 'C': if(t[4]=='A') return 0; else break;
            case 'D': if(t[0]!='C') return 0; else break;
            case 'E': if(t[0]=='D') return 0; else break;
        }
    }
    return 1;
}

int work(int k)
{
    if(flag==1) return 0;
    int i;
    if(k==6)
    {
        if(yes()==1)
        {
            for(i=0;i<5;i++)
                ok[i]=t[i];
            ok[6]='\0';
            flag=1;
        }
        return 0;
    }
    for(i=0; i<5; i++)
    {
        if(f[i]==1) continue;
        if(k==1)
        {
            if(i==0 || i==4) continue;
        }
        if(i==4)
        {
            if(k==2 || k==3) continue;
        }
        t[k-1]='A'+i;t[k]='\0';
        f[i]=1;
        work(k+1);
        f[i]=0;
        t[k-1]='\0';
        if(flag==1) return 0;
    }
    return 0;
}

int main()
{
    int ans[6];
    int i;
    memset(f, 0, sizeof(f));
    work(1);
    for(i=0; i<5; i++)
    {
        ans[ok[i]-'A']=i+1;
    }
    for(i=0; i<4; i++)
        printf("%d ", ans[i]);
    printf("%d\n", ans[4]);
    return 0;
}
