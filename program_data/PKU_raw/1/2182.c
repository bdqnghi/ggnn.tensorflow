
int fen(int m,int k)
{
    int i,t=1,n=0;
    for(i=2;i<=m;i++)
    {
    if(m%i==0) n++;
    }
    if(n==1||m==1) return 1;
    else
    for(i=2;i<=m;i++)
    {
        if(m%i==0&&m/i>=i&&i>=k)
        {
            k=i;
            t=t+fen(m/i,k);
        }
    } 
    return t;              
}
int main()
{
    int fen(int m,int k);
    int n,i,x;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
         scanf("%d",&x);
         printf("%d\n",fen(x,1));
     }
    
 }    
                
     