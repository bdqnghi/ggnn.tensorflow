int sum=0;
void f(int n,int i)
{
    if(n==1) sum++;
    while(i<=n)
    {
        if(n%i==0) f(n/i,i);
        i++;
    }
    return ;
}
int main()
{

    int t=0;
    cin>>t;
    while(t--)
    {
        int n=0;
        cin>>n;
        int i=2,result=1;

       for (i=2;i<=n/2;i++) {
            if(n%i==0)
            {
                sum=0;
                f(n/i,i);
                result=result+sum;
            }

        }
        cout<<result<<endl;
    }
    return 0;
}
