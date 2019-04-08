int f1(int m,int n)
{
    int cnt;
    if(m<0)
    {
         return 0;
         }
    else if (n==1)
    {
        return 1;
             }
    else
    {
        cnt=f1(m,n-1)+f1(m-n,n);
        return cnt;
        } 
        }
         
               
int main()
{
    int k , m , n , i ,cnt;
    cin>>k;
    for (i=1;i<=k;i++)
    {
        cin>>m>>n;
        cnt=f1(m,n);
        cout<<cnt<<endl;
        }
    return 0;
}