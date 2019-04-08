int place(int m,int n)
{
    if (m==1||n==1||m==0||n==0)
    return 1;
    else {
          if (m-n>=0) return place(m,n-1)+place(m-n,n);
          else       return place(m,n-1);    
         }
}
int main()
{
    int t,m,n,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
    scanf("%d %d",&m,&n);
    printf("%d\n",place(m,n));
    }
    
} 
