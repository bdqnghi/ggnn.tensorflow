int main()
{
    int a[101]={0},i=0;//???????i???? 
    int n=0,k=0;
    int res[101]={0};//???
    int s=0,t=0;//???? 
    cin>>n;//??? 
    for(i=1;i<=n;i++)
    {
        a[i]=i;//????n?? 
        if(a[i] %7 != 0 && a[i] % 10 != 7 && a[i] / 10 != 7)  
        {k++ ;//?????? 
         res[t]=i;
         t++;
        }       
    }
    for(i=0;i<k;i++)
    {
       s=s+a[res[i]]*a[res[i]];                           
    } 
    cout<<s<<endl;
    getchar();
    return 0;
}
