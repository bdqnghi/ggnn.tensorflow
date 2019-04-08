int n,x[10100],y[10100];
char s[101000];
int ans,best;
int v[10100];
int main()
{
//    freopen("a.in","r",stdin);
  //  freopen("a.out","w",stdout);
    gets(s);
    n=1;
    memset(x,0,sizeof(x));
    memset(y,0,sizeof(y));
    for (int i=0;s[i];i++)
    {
        if (s[i]==',') n++;
        else x[n]=x[n]*10+s[i]-48;
    }
    gets(s);
    n=1;
    for (int i=0;s[i];i++)
    {
        if (s[i]==',') n++;
        else y[n]=y[n]*10+s[i]-48;
    }
//    for (int i=1;i<=n;i++) printf("%d %d\n",x[i],y[i]);
/*    sort(x+1,x+n+1);
    sort(y+1,y+n+1);
    ans=0;best=0;
    int j=1,k=1;
    for (int i=0;i<=1000;i++)
    {
        while (j<=n&&x[j]==i) ans++,j++;
        while (k<=n&&y[k]==i) ans--,k++;
        if (ans>best) best=ans;
    }
    printf("%d,%d\n",n,best);*/
    memset(v,0,sizeof(v));
    for (int i=1;i<=n;i++)
      for (int j=x[i];j<y[i];j++) 
      {v[j]++;if (v[j]>best) best=v[j];}
        printf("%d %d\n",n,best);
}
