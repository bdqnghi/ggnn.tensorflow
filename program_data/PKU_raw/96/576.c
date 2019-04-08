int main()
{
    char in[101];
    int shan[100];
    int a=0,yu=0,n=0;
    cin>>in;
    if(strlen(in)==1 || (strlen(in)==2&&in[0]=='1'&&in[1]<'3'))   cout<<'0'<<endl<<in<<endl;
    else
    {
    yu=in[0]-'0';
    for(int i=1;in[i]!=0;i++)
       {
           a=yu*10+(in[i]-'0');
           shan[i-1]=a/13;
           yu=a-shan[i-1]*13;
           n++;
       }
    if(shan[0]==0)
      for(int i=1;i<n;i++)
         cout<<shan[i];
    else for(int i=0;i<n;i++)
            cout<<shan[i];
    cout<<endl;
    cout<<yu<<endl;
    }
    return 0;
}
