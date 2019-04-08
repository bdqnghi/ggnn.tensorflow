int main()
{
      int t[1010],w[1010];
      int n,i,j,k,m,ans,w1,w2,head,tailt,tailw;
      
      
      while (1)
      {
            scanf("%d",&n);
            ans=0;
            if (n==0)
                break;
            for (i=1;i<=n;i++)
                scanf("%d",&t[i]);
            for (i=1;i<=n;i++)
                scanf("%d",&w[i]);
            for (i=1;i<n;i++)
                for (j=i+1;j<=n;j++)
                {
                    if (t[i]<t[j])
                    {
                        k=t[i]; t[i]=t[j]; t[j]=k;
                    }
                    if (w[i]<w[j])
                    {
                        k=w[i]; w[i]=w[j]; w[j]=k;
                    }
                }
            head=1;
tailt=n;
tailw=n;
for (i=1;i<=n;i++)
{
if (t[head]>w[i])
{
head++;
ans+=200;
}
else if (t[head]<w[i])
{
tailt--;
ans-=200;
}
else if (t[head]==w[i])
{
for (j=tailt,m=tailw;j>=head;)
{
if (t[j]>w[m])
{
ans+=200;
tailt--;
tailw--;
j--;
m--;
}
else
{
if (t[j]<w[i])
ans-=200; 
tailt--;
j--;
break;
}
}
}
if (head>tailt)
break;
}

printf("%d\n",ans);
}
getchar();
getchar();
getchar();
getchar();
getchar();
getchar();
}
