int main()
{
    int n,i;                            //???n???i
    cin>>n; 
    float s_all,s_good;                 //strandard
    cin>>s_all>>s_good;                 //??? 
    float all,good;                     //????????? 
    for (i=1;i<=n-1;i++)
    {
        cin>>all>>good;
        if (s_good/s_all-good/all>0.05) //????~ 
           cout<<"worse"<<endl;
        else if (good/all-s_good/s_all>0.05)
           cout<<"better"<<'\n';
        else
           cout<<"same"<<'\n';
    }
    return 0;                           //?? (>w<) 
}
