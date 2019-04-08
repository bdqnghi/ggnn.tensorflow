int prime[50001];
int isPrime(int a)
{
        for(int i=2;i*i<=a;i++)
                if(a%i==0)
                {
                        return 0;
                }
        return 1;
}
int main()
{
        int n;

        cin>>n;
        prime[2]=1;
        for(int i=6;i<=n;i+=2)
        {
                if(isPrime(i-2))
                        {
                                cout<<i<<"="<<2<<"+"<<(i-2)<<endl;
                                continue;
                        }

                for(int j=3;j*2<=i;j+=2)
                {
                        if(isPrime(j)&&isPrime(i-j))
                        {
                                cout<<i<<"="<<j<<"+"<<(i-j)<<endl;
                                break;
                        }
                }
        }
        return 0;
}