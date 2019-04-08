int main()
{   
    int n[100],m[100],i;
    int cho(int m,int n);n[0]=1;m[0]=1;
    for (i=1;n[i-1]!=0&&m[i-1]!=0;i++)
    scanf("%d %d",&n[i],&m[i]);
    for (i=1;n[i]!=0&&m[i]!=0;i++) printf("%d\n",cho(m[i],n[i]));
}
int cho(int m,int n)
{   
    int t=1,i,j,k,s,temp=1;int a[301];
    for (i=0;i<301;i++) a[i]=1;
    if (n!=1)
    {for (k=1;s!=1;k++)
    {for (i=1,t=temp;i<=m;) {if (t>n) t=1;if (a[t]==1) i++;t++;}a[t-1]=0;temp=t;
    for (j=1,s=0;j<=n;j++) if(a[j]==1) s++;} 
    for (j=1;j<=n;j++) if (a[j]==1) return (j);}
    else j=1;return (j);
}
