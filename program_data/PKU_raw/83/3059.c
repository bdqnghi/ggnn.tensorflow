double f(int n)
{
       if(n<=100 && n>=90)
           return 4.0;
       if(n<=89 && n>=85)
       return 3.7;
       if(n<=84 && n>=82)
       return 3.3;
       if(n<=81 && n>=78)
       return 3.0;
       if(n<=77 && n>=75)
       return 2.7;
       if(n<=74 && n>=72)
       return 2.3;
       if(n<=71 && n>=68)
       return 2.0;
       if(n<=67 && n>=64)
       return 1.5;
       if(n<=63 && n>=60)
       return 1.0;
       if(n<60)
       return 0;
       }
int main()
{
    int cred[11],score[11],n;
    cin>>n;
      double ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>cred[i];
        ans+=cred[i];
        }
    double sc=0;
    for(int i=0;i<n;i++)
    {    
        cin>>score[i];
        sc+=f(score[i])*cred[i];
        }
    ans = sc/ans;
    cout.precision(3);
    cout<<ans<<endl;
}
