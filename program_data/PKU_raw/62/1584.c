int main()
{
    int len, i;
    char *p;
    char a[200];
    p=a;
    cin.getline(a,200);
    len=strlen(a);
    for(i=0;i<len-1;i++)
    {
        if(*(p+i)!=' ' && *(p+i+1)==' ')
        cout<<*(p+i)<<" ";
        else if(*(p+i)!=' ' && *(p+i+1)!=' ')
        cout<<*(p+i);             
    }
    cout<<*(p+len-1);
    int y;cin>>y;
    return 0;
    
}
