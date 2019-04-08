int main()
{
    int n,f=0,f1=0;
    char w[41];
    cin>>n;
    cin.get();
    while(cin>>w)
    {
        if ((f+1+strlen(w))<=80)
        {
            if(f1!=0)
            {
                f++;
                cout<<" ";
            }
            cout<<w;
            f1++;
            f+=strlen(w);
        }
        else
        {
            cout<<endl;
            f1=0;
            cout<<w<<" ";
            f=strlen(w)+1;
        }   
        memset(w,0,sizeof(w));
    }
    return 0;
}