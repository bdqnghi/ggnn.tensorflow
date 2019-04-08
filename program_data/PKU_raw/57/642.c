int main()
{  
    int n,l,i;
    char a[33];
    cin>>n;
    while(n--)
    {
        cin>>a;
        l=strlen(a);
        if((a[l-1]=='r')||(a[l-1]=='y'))
        {
            for(i=0;i<l-2;i++)
                cout<<a[i];
        }
        if(a[l-1]=='g')
        {
           for(i=0;i<l-3;i++)
               cout<<a[i];
        }
        cout<<endl;
    }
    return 0;
}
