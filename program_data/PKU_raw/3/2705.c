int a[1001],n;
int comp(const void *a,const void *b)
{
    return *(int *)a-*(int *)b;
}
int findx(int l,int r,int key)
{
    if(l>r)return 0;
    if(r==l){
             if(a[r]==key)
             return 1;
             else
             return 0;
             }
    if(a[(r+l)/2]==key){
                         return 1;
                         }
                         else if(a[(r+l)>>1]<key)
                         {
                              return findx(((r+l)/2)+1,r,key);
                         }
                         else 
                         return findx(l,((r+l)/2)-1,key);
}
                         
int main()
{
    int i,k;
    //freopen("1.txt","r",stdin);
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    qsort(a+1,n,sizeof(int),comp);
    for(i=1;i<n;i++)
    if(findx(i+1,n,k-a[i]))
    {
                         printf("yes");
                         return 0;
    }
    printf("no");
   //getch();   
    return 0;
}
