int count1;
int a[1010] ;
int b[1010];
int n;
int cmp(const void *a,const void *b)
{
    return *(int *)b - *(int *)a;
}
int dfs(int *a,int *b)
{
    int x,y,i,j;
    x=y=0;
    i=j=n-1;
    while(true)
    {
    if(x>i)
    break;
    if(a[x]>b[y])
    {
    count1+=1;
    x++;
    y++;
    }
    else
    if(a[i]>b[j])
    {
    count1+=1;
    i--;
    j--;
    }
    else
    {
    if(a[i]<b[y])
    count1-=1;
    i--;
    y++;
    }
    }
}
int main()
{
    while(true)
    {
    cin>>n;
    if(n==0)
    break;
    for(int i=0;i<n;i++)
    cin>>a[i];
    qsort(a,n,sizeof(int),cmp);
  //  for(int i=0;i<n;i++)
  //  cout<<a[i]<<' ';
  //  cout<<endl;
    for(int i=0;i<n;i++)
    cin>>b[i];
    qsort(b,n,sizeof(int),cmp);
    count1=0;
  //  i_count=0;
    dfs(a,b);
    cout<<200*(count1)<<endl;
    }
    return 0;
}
