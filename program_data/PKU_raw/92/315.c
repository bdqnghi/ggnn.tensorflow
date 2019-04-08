


int n;
int q[M];
int p[M];
int map[M][M];
int vis[M][M];


int cmp(const void *a,const void *b)
{
    return *(int *)a - *(int *)b;
}


void Initial()
{
    memset(map,-1,sizeof(map));
    memset(vis,0,sizeof(vis));
}


int Branch(int cur,int s,int e)
{
    int Cnt = 0;
    if(cur > n) return 0;
    if(p[cur] > q[s]){
       Cnt++; s++;
       if(!vis[s][e]){
          map[s][e] =  Branch(cur+1,s,e);
          vis[s][e] = 1;
       }
       Cnt += map[s][e];
    }
    else if(p[cur] < q[s]){
       Cnt--; e--;
       if(!vis[s][e]){
        map[s][e] = Branch(cur+1,s,e);
        vis[s][e] = 1;
       }
       Cnt += map[s][e];
    }
    else if(p[cur] == q[s]){
        if(!vis[s+1][e]){
          map[s+1][e] = Branch(cur+1,s+1,e);
          vis[s+1][e] = 1;
        }
        if(!vis[s][e-1]){
          map[s][e-1] = Branch(cur+1,s,e-1);
          vis[s][e-1] = 1;
        }
        Cnt += max(map[s+1][e],map[s][e-1]-1); //!!! -1
    }
    return Cnt;
}


int main()
{
    #ifdef LOCA
    freopen("in.in","r",stdin);
    #endif
    int i,j,s,e;
    while(scanf("%d",&n) && n)
    {
        for(i = 1;i <= n;i++)
         scanf("%d",&p[i]);
        for(i = 1;i <= n;i++)
         scanf("%d",&q[i]);
        qsort(&p[1],n,sizeof(int),cmp);
        qsort(&q[1],n,sizeof(int),cmp);
        Initial(); s = 1; e = n;
        printf("%d\n",Branch(1,s,e)*200);
    }


    return 0;
}