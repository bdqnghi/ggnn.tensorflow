/* Name        : ?????? 
 * Version     : 1.0 
 * Date        : 2013-01-19
 * New         : Null
 * Description : 
 * State       : Design
 */
int main()
{
    int N=0;
    int A=0,B=0;
    int Prime[10000]={-1};
    cin>>N;
    for (int n=2;n<N;n++)
    {
        for (int j=2;j<n;j++)
            if (n%j==0)
            {
                Prime[n-1]=-1;
                break;
            }
    }
    for (int n=1;n<=N/2;n=n+2)
    {
        if (Prime[n-1]==0 && Prime[N-n-1]==0)
            cout<<n<<' '<<N-n<<endl;
    }
    return 0;
}
